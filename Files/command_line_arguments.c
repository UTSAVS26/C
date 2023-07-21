#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp, *temp;
    char name[20];

    if(argc == 0 || argc == 1)
    {
        printf("\n\n\tError Command Not Complete.....");
    }
    else
    {
        fp = fopen(argv[1], "r");
        temp = fopen(argv[2], "w");

        while(!feof(fp))
        {
            fscanf(fp, "%s", &name);
            fprintf(temp, "%s\n", name);
        }
        
        fclose(fp);
        fclose(temp);

        printf("\n\tData is Copied from %s to %s.", argv[1], argv[2]);
    }

    printf("\n\nPress Enter to Continue.....");
}