#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;
    char operador;
    printf("\nPrimeiro valor:"); scanf("%lf", &x);
    printf("\nSegundo valor:"); scanf("%lf", &y);
    printf("\nOperador:"); scanf("%s", &operador);
    double z = x + y;
    double w = x - y;
    double m = x * y;
    double l = x / y;

    switch (operador)
    {
    case '+' : 
        printf("\nResultado: %.1lf - %.1lf = %.1lf", x, y, z);
        break;
    case '-' :
        printf("\nResultado: %.1lf - %.1lf = %.1lf", x, y, w);
        break;
    case '*' :
        printf("\nResultado: %.1lf * %.1lf = %.1lf", x, y, m);
        break;
    case '/' : 
        printf("\nResultado: %.1lf / %.1lf = %.1lf", x, y, l);
        break;
    default:
    printf("\nOperador invalido");
        break;
    }
    return 0;
}