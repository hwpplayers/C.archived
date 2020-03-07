#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

int main(int argc, char *argv[])
{
    int result;
    int a_flag = 0, b_flag = 0, c_flag = 0, d_flag = 0, ccc_flag = 0, bbb_flag = 0;
    char *c_arg, *d_arg, *ccc_arg;
    int option_index;
    struct option options[] = {
        { "aaa", no_argument, NULL, 'a' },
        { "bbb", no_argument, &bbb_flag, 1 },
        { "ccc", required_argument, NULL, 2},
        { 0, 0, 0, 0 }
    };
    int i;

    opterr = 0;
    while ((result = getopt_long(argc, argv, "abc:d:", options, &option_index)) != -1) {
        switch (result) {
            case 2:
                if (option_index == 2) {
                    ccc_flag = 1;
                    ccc_arg = optarg;
                }
                break;
            case 'a':
                a_flag = 1;
                break;
            case 'b':
                b_flag = 1;
                break;
            case 'c':
                c_flag = 1;
                c_arg = optarg;
                break;
            case 'd':
                d_flag = 1;
                d_arg = optarg;
                break;
            case '?':
                if (optopt == 'c' || optopt == 'd')
                    fprintf(stderr, "-%c option given without an argument\n", optopt);
                else if (optopt == 2)
                    fprintf(stderr, "--%s option given without an argument\n", options[optopt].name);
                else
                    fprintf(stderr, "invalid switch: -%c\n", optopt);
                break;
        }
    }

    if (argv[optind] != NULL) {
        printf("Arguments without switch:\n");
        for (i = optind; i < argc; ++i)
            puts(argv[i]);
    }

    if (a_flag) {
        printf("-a or --aaa is given\n");
    }
    if (b_flag) {
        printf("-b is given\n");
    }
    if (c_flag) {
        printf("-c is given, its argument: %s\n", c_arg);
    }
    if (d_flag) {
        printf("-d is given, its argument: %s\n", d_arg);
    }
    if (bbb_flag) {
        printf("--bbb is given\n");
    }
    if (ccc_flag) {
        printf("--ccc is given, its argument: %s\n", ccc_arg);
    }
    
    /* ... */

    return 0;
}
