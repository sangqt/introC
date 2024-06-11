#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Hello, World!\n");
    int x = 1;
    int *pX = &x;
    int **ppX = &pX;
    int **pppX = &ppX;

    printf("%p\n", *pppX);
    return 0;
}