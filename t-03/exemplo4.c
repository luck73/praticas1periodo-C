#include <stdio.h>
#include <math.h>

int main (){
    double x1, y1, x2, y2;
    printf("Digite o valor dos pontos x1, y1, x2, y2:\n");
    scanf("%lf", &x1);
    scanf("%lf", &y1);
    scanf("%lf", &x2);
    scanf("%lf", &y2);
    double d = sqrt(pow(x1 - x2,2) + pow(y1 - y2,2));
    printf("A distancia sera: %lf\n", d);
    return 0;
}