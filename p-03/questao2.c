// 21.1.4011 Lucca Sales de Souza Teodoro turma 42

#include <stdio.h>
#include <math.h>

float calculaRaizes(float *delta, float a, float b, float c);
float calculaRaizes(float *delta, float a, float b, float c)
{
    *delta = pow(b, 2) - (4 * a * c);
    if (*delta >= 0)
    {
        float x1, x2;
        x1 = -b + sqrt(*delta) / 2 * a;
        x2 = -b - sqrt(*delta) / 2 * a;
        printf("As raizes sao %f, %f\n", x1, x2);
        return 1;
    }
    else
    {
        printf("Nao possue raizes reais");
        return 0;
    }
}

int main()
{
    float a, b, c, delta;
    printf("Digite os valores de a, b, c: \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    calculaRaizes(&delta, a, b, c);
    return 0;
}