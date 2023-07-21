// program named mainreturn.c
#include <stdio.h>

// defining main with arguments
/*int main(int argc, char* argv[])
{
	int i;
	printf("You have entered %d arguments:\n", argc);

	for (i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}
	return 0;
}*/

int main(int argc, char* argv[])
{
	int i;
    printf("Program name is: %s", argv[0]);
 
    if (argc == 1)
        printf("\nNo Extra Command Line Argument Passed "
               "Other Than Program Name");
 
    if (argc >= 2) {
        printf("\nNumber Of Arguments Passed: %d", argc);
        printf("\n----Following Are The Command Line "
               "Arguments Passed----");
        for (i = 0; i < argc; i++)
            printf("\nargv[%d]: %s", i, argv[i]);
    }
    return 0;
}
