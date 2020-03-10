#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <sys/stat.h>
#include <errno.h>
#include <unistd.h>
#include <dirent.h>
#include <pwd.h>
#include <grp.h>

void exit_sys(const char *msg);
void printls(const char *path);
char *get_ls_info_line(const char *path, int hlinkDigit, int unameDigit, int gnameDigit, int sizeDigit);

int main(int argc, char *argv[])
{
	struct stat finfo;
	int i;

	if (argc == 1) {
		fprintf(stderr, "too few parameters!..\n");
		exit(EXIT_FAILURE);
	}

	printls(argv[1]);

	return 0;
}

void printls(const char *path)
{
	char *str;
	DIR *dir;
	struct dirent *dire;
	struct stat finfo;
	char buf[4096];
	int maxhDigit = 0, maxunameDigit = 0, maxgnameDigit = 0, maxsizeDigit = 0;
	int digit;
	struct passwd *pass;
	struct group *gr;

	if ((dir = opendir(path)) == NULL)
		exit_sys("open_dir");

	while ((dire = readdir(dir)) != NULL) {
		sprintf(buf, "%s/%s", path, dire->d_name);
		if (stat(buf, &finfo) == -1)
			exit_sys("stat");
		digit = (int)log10(finfo.st_nlink) + 1;
		if (digit > maxhDigit)
			maxhDigit = digit;
		if ((pass = getpwuid(finfo.st_uid)) == NULL)
			return;
		digit = strlen(pass->pw_name);
		if (digit > maxunameDigit)
			maxunameDigit = digit;
		if ((gr = getgrgid(finfo.st_gid)) == NULL)
			return;
		digit = strlen(gr->gr_name);
		if (digit > maxgnameDigit)
			maxgnameDigit = digit;
		digit = (int)log10(finfo.st_size) + 1;
		if (digit > maxsizeDigit)
			maxsizeDigit = digit;
	}

	rewinddir(dir);

	while ((dire = readdir(dir)) != NULL) {
		sprintf(buf, "%s/%s", path, dire->d_name);
		str = get_ls_info_line(buf, maxhDigit, maxunameDigit, maxgnameDigit, maxsizeDigit);
		if (str != NULL)
			puts(str);
	}

	closedir(dir);
}

char *get_ls_info_line(const char *path, int hlinkDigit, int unameDigit, int gnameDigit, int sizeDigit)
{
	struct stat finfo;
	static char buf[4096];
	static mode_t modes[] = { S_IRUSR, S_IWUSR, S_IXUSR, S_IRGRP, S_IWGRP, S_IXGRP, S_IROTH, S_IWOTH, S_IXOTH };
	struct passwd *pass;
	struct group *gr;
	char *str;
	int index = 0;
	int i;

	if (stat(path, &finfo) == -1)
		return NULL;

	if (S_ISREG(finfo.st_mode))
		buf[index] = '-';
	else if (S_ISDIR(finfo.st_mode))
		buf[index] = 'd';
	else if (S_ISCHR(finfo.st_mode))
		buf[index] = 'c';
	else if (S_ISBLK(finfo.st_mode))
		buf[index] = 'b';
	else if (S_ISFIFO(finfo.st_mode))
		buf[index] = 'p';
	else if (S_ISLNK(finfo.st_mode))
		buf[index] = 'l';
	else if (S_ISSOCK(finfo.st_mode))
		buf[index] = 's';
	++index;

	for (i = 0; i < 9; ++i)
		buf[index++] = (finfo.st_mode & modes[i]) ? "rwx"[i % 3] : '-';
	buf[index] = '\0';

	index += sprintf(buf + index, " %*lu", hlinkDigit, (unsigned long)finfo.st_nlink);

	if ((pass = getpwuid(finfo.st_uid)) == NULL)
		return NULL;
	index += sprintf(buf + index, " %-*s", unameDigit, pass->pw_name);

	if ((gr = getgrgid(finfo.st_gid)) == NULL)
		return NULL;
	index += sprintf(buf + index, " %-*s", gnameDigit, gr->gr_name);

	index += sprintf(buf + index, " %*lu", sizeDigit, (unsigned long)finfo.st_size);
	index += strftime(buf + index, 100, " %b %e %H:%M", localtime(&finfo.st_mtime));

	str = strrchr(path, '/');
	sprintf(buf + index, " %s", str ? str + 1 : path);

	return buf;
}

void exit_sys(const char *msg)
{
	perror(msg);

	exit(EXIT_FAILURE);
}
