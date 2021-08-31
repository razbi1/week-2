#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void pascal_triangle(int n)
{
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i; j++)
            printf(" ");
        for (int k = 0; k < 2*i-1; k++)
            printf("*");
        printf("\n");
    }
}

void square_figure(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("*");
        printf("\n");
    }
}

void right_side_triangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < 2*i-1; k++)
            printf("*");
        printf("\n");
    }
}

int main(int argc, char **argv)
{
    int n = atoi(argv[1]);
    if (atoi(argv[2]) == 1)
        pascal_triangle(n);
    else if (atoi(argv[2]) == 2)
        square_figure(n);
    else
        right_side_triangle(n);
    return (0);
}
