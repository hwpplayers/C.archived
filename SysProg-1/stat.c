#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/stat.h>
#include <dirent.h>

void exit_sys(const char *msg);

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
		if (stat(path, &finfo) == -1)
			exit_sys("stat");
		printf("----------------------\n");
		printf("%s\n", ent->d_name);
		printf("%ld\n", (long)finfo.st_size);
		printf("%s", ctime(&finfo.st_mtime));
	}

	closedir(dir);

	return 0;
}

void exit_sys(const char *msg)
{
	perror(msg);

	exit(EXIT_FAILURE);
}
