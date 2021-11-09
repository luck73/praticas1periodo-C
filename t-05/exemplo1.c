#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;
    char operador;
    printf("\nPrimeiro valor:"); scanf("%lf", &x);
    printf("\nSegundo valor:"); scanf("%lf", &y);
   
    printf("\nOperador:"); scanf("%s", &operador);
   
    if (operador == '+')
    {
        double z = x + y;
        printf("\nResultado: %.1lf", z);
    }
    else if (operador == '-')
    {
        double z = x - y;
        printf("\nResultado: %.1lf", z);
    }
    else if (operador == '*')
    {
        double z = x * y;
        printf("\nResultado: %.1lf", z);
    }
    else if (operador == '/')
    {
        double z = x / y;
        printf("\nResultado: %.1lf", z);
    }
    else 
    {
        printf("\nOperador invalido");
    }
    return 0;
}