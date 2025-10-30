#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do{ type t = x; x = y; y = t; } while(0)

void ary_reverse(int a[], int n)
{
    for (int i = 0; i < n; i++)
        swap(int, a[i], a[n - i - 1]);
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int nx;
}