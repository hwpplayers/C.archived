#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/stat.h>
#include <dirent.h>
#include <pwd.h>
#include <grp.h>

void exit_sys(const char *msg);
const char *get_ls_info_line(const char *path);

int main(int argc, char *argv[])
{
	DIR *dir;
	struct dirent *ent;
	struct stat finfo;
	char path[4096];

	if (argc != 2) {
		fprintf(stderr, "wrong number of arguments!..\n");
		exit(EXIT_FAILURE);
	}

	if ((dir = opendir(argv[1])) == NULL)
		exit_sys("opendir");

	while ((ent = readdir(dir)) != NULL) {
		sprintf(path, "%s/%s", argv[1], ent->d_name);
		printf("%s\n", get_ls_info_line(path));
	}

	closedir(dir);

	return 0;
}

const char *get_ls_info_line(const char *path)
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

	index += sprintf(buf + index, " %lu", (unsigned long)finfo.st_nlink);

	if ((pass = getpwuid(finfo.st_uid)) == NULL)
		return NULL;
	index += sprintf(buf + index, " %s", pass->pw_name);

	if ((gr = getgrgid(finfo.st_gid)) == NULL)
		return NULL;
	index += sprintf(buf + index, " %s", gr->gr_name);

	index += sprintf(buf + index, " %lu", (unsigned long)finfo.st_size);
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
