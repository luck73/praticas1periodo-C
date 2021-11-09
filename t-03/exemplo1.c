#include <stdio.h>
#include <math.h>
int main()
{
    double c1, c2;
    printf("Usuario, gentileza informar os valores dos catetos:\n");
    scanf("%lf", &c1);
    scanf("%lf", &c2);
    double h = sqrt(pow(c1, 2) + pow(c2, 2));
    printf("O valor da hipotenusa = %lf\n", h);
    return 0;
}