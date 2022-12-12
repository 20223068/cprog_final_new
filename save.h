#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int member_save(node *ptr)
{
    FILE *fp = NULL;
    fp = fopen("data.txt", "w");

    if(fp == NULL)
    {
        printf("Failed to open file %s\n", "data.txt");
        return -1;
    }

    fprintf(fp, "%s %s %s", name, address, phone);
    fclose(fp);
    return 0;
}
