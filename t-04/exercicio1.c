#include <stdio.h>

int main()
{
    double a, b;
    printf("Digite dois numeros:\n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    if( a > b){
        printf("%lf e o maior numero\n", a);
    }
    if( b > a){
        printf("%lf e o maior numero\n", b);
    }
    return 0;
}