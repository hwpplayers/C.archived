#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main(void)
{
	DIR *dir;
	struct dirent *ent;

	if ((dir = opendir("/usr/include")) == NULL)  {
		perror("opendir");
		exit(EXIT_FAILURE);
	}

	while ((ent = readdir(dir)) != NULL)
		printf("%s\n", ent->d_name);

	closedir(dir);

	return 0;
}
