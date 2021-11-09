#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Digite o valor de n: \n");
    scanf("%d", &n);

    double soma = 0, nro;
    for (int i = 0; i < n; i++){
        printf("digite o valor de x%d:", i + 1);
        scanf("%lf", &nro);
        soma += nro * nro;
    }
    double media = sqrt(soma / n);
    printf("Media quadratica : %lf\n", media);
    return 0;
}