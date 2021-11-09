#include <stdio.h>
#include <math.h>

int main()
{
    int n = 1;
    while (n <= 20)
    {
        int quadrados = pow(n, 2);
        printf("%d ", quadrados);
        n++;
    }

    return 0;
}