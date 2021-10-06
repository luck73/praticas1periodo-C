#include <stdio.h>
#include <math.h>

int main()
{
    int ano;

    printf("Digite um ano:\n");
    scanf("%d", &ano);

    if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0))
    {
        printf("Ano e bissexto\n");
    }
    if (ano % 4 != 0)
    {
        printf("Ano nao e bissexto\n");
    }
    if (ano % 4 == 0 && ano % 100 == 0)
    {
        printf("Ano nao e bissexto");
    }

    return 0;
}