#include <stdio.h>

int main(void)
{
    int n;

    printf("몇 단 삼각형 입니까? : ");
    scanf("%d", &n);
    //삼각형
    for (int i = 1; i < n; i++)
    {
        for(int j = n-1; j > i; j--)
            putchar(' ');
        for(int j = 0; j < 2*i;j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}