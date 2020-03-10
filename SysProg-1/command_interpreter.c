#include <stdio.h>
#include <string.h>

/* Symbolic Constants */

#define MAX_CMD_LINE	1024
#define MAX_PARAMS		32

/* Type Declarations */

typedef struct tagCMD {
	const char *cmdText;
	void(*proc)(void);
} CMD;

/* Function Prototypes */

void parse_cmdline(void);
void proc_dir(void);
void proc_del(void);

/* Global Object Definitions */

char g_cmdLine[MAX_CMD_LINE];
CMD g_cmds[] = { 
	{"dir", proc_dir},
	{ "del", proc_del },
	{NULL, NULL}
};

char *g_params[MAX_PARAMS];
int g_nparams;

/* Function Definitions */

int main(void)
{
	int i;

	for (;;) {
		printf("CSD>");
		gets(g_cmdLine);
		parse_cmdline();
	
		if (g_nparams == 0)
			continue;
		for (i = 0; g_cmds[i].cmdText != NULL; ++i)
			if (!strcmp(g_params[0], g_cmds[i].cmdText)) {
				g_cmds[i].proc();
				break;
			}
		if (g_cmds[i].cmdText == NULL) 
		{
			printf("command not found!..\n");
		}
	}

	return 0;
}

void parse_cmdline(void)
{
	char *str;

	g_nparams = 0;
	for (str = strtok(g_cmdLine, " \t"); str != NULL; str = strtok(NULL, " \t"))
		g_params[g_nparams++] = str;
}

void proc_dir(void)
{
	printf("dir command...\n");
}

void proc_del(void)
{
	if (g_nparams != 2) {
		printf("the syntax of the command is incorrect.\n");
		return;
	}
	
	printf("file deleted...\n");
}
