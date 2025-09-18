#include <stdio.h>

int main(void)
{
    printf("--------곱셈표--------\n");

    for(int i = 1; i <=9; i++)
    {
        for (int j = 1; j <= 9;j++)
            printf("%d x %d = %d", i, j, i*j);
        putchar('\n');
    }

    return 0;
}