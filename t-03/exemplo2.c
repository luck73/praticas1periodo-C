#include <stdio.h>
#include <math.h>

#define PI  3.141592

int main(){
    double hipotenusa, alpha;
    printf("Digite os valores da hipotenusa e do angulo alpha:\n");
    scanf("%lf", &hipotenusa);
    scanf("%lf", &alpha);
    alpha = alpha * PI / 180.0;
    double cateto1 = cos(alpha) * hipotenusa;
    double cateto2 = sin(alpha) * hipotenusa;
    printf("Os lados desse triangulo sao:\n - %lf\n - %lf\n - %lf\n",
            hipotenusa, cateto1, cateto2);
    return 0;
}