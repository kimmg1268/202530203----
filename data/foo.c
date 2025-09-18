#include <stdio.h>

int main(void)
{
    int n;
    printf("몇 단 삼각형 입니까? : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
            putchar(' ');
        for(int j = 1; j <= i;j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}