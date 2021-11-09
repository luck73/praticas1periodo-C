#include <stdio.h>

int main()
{
    int n;
    printf("quantos termos:\n");
    scanf("%d", &n);

    double pi = 0;
    double sinal = +1;
    for (int i = 0; i < n; i++)
    {
        pi += sinal * (1.0 / (1 + i * 2));
        sinal *= -1;
    }
    pi *= 4;
    printf("valor de pi igual a %.6lf", pi);
    return 0;
}