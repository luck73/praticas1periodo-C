#include <stdio.h>
int main ()
{
    double x1, x2, x3;
    printf("Usuario, digite os valores de x1, x2, x3:\n");
    scanf("%lf", &x1);
    scanf("%lf", &x2);
    scanf("%lf", &x3);
    double y = (x1 + 3) * (x1 + 3) * (x1 + 3) * (x1 + 3)
              + (x2 * x3) * (x2 * x3) * (x2 * x3);
    printf("y = %lf\n", y);
    return 0;
}