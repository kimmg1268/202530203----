#include <stdio.h>

int main(void)
{
    int n;

    put("1부터 n까지의 초합을 구한다.");

    printf("n값" : );
    scanf("%d", &n);
    int sum = 0;
    int i = 1;
    int sum2 = 0;
    int sum3 = 0;

    while( i <= n )
    {
        sum += i;
        i++
    }
    for(int j =1;j <= n; j++)
    {
        sum2 += j;
    }
    //가우스의 덧셈 알고리즘
    sum3 = n * (n+1) / 2;
    printf("가우스의 덧셈 알고리즘으로 구한 1부터 %d까지의 총합은 %d입니다.\n",n,sum3);

    printf("while-1 부터 %d까지의 총합은 %d입니다.\n",n,sum);
    printf("for-1qnxj %d까지의 총합은 %d입니다.\n",n,sum2);
}