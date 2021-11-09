#include <stdio.h>

int main()
{
    const double PI = 3.141592;
    double raio;

    printf("Digite o valor do raio do circulo: \n");
    scanf("%lf", &raio);
    
    if( raio >= 0){
        
        double area = PI * raio * raio;
        printf("\nArea do circulo: %lf\n", area);
    }
    return 0;
}   