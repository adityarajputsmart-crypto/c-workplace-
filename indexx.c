#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    fptr = fopen("aditya.txt", "w");

    int n;
    scanf("%d", &n);
    fprintf(fptr, "%d\n", n);

    fclose(fptr);
}