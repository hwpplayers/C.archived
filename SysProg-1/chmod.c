#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    mode_t modes[] = {S_IRUSR, S_IWUSR, S_IXUSR, S_IRGRP, S_IWGRP, S_IXGRP, S_IROTH, S_IWOTH, S_IXOTH};
    unsigned smode;
    mode_t dmode;
    int i;
    
    if (argc < 3) {
        fprintf(stderr, "wrong number of arguments!\nUsage: mychmod <mode> <file list>\n");
        exit(EXIT_FAILURE);
    }
    
    sscanf(argv[1], "%o", &smode);
    
    dmode = 0;
    for (i = 8; i >= 0; --i) 
        if ((smode >> i) & 1)
            dmode |= modes[8 - i];
    
    for (i = 2; i < argc; ++i)
        if (chmod(argv[i], dmode) == -1)
            fprintf(stderr, "cannot change mode: %s\n", argv[i]);
    
    return 0;
}
