// 21.1.4011 Lucca Sales de Souza Teodoro turma 42

#include <stdio.h>

int is_prime(int n);
int is_prime(int n)
{
    int i = 1, contagem = 0;

    while ((i <= n) && (contagem <= 2))
    {
        if ((n % i) == 0)
        {
            contagem++;
        }
        i++;
    }

    if (contagem == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    int n, resultado;

    printf("Digite um numero:\n");
    scanf("%d", &n);

    resultado = is_prime(n);

    if (resultado == 1)
    {
        printf("%d e um numero primo!", n);
    }
    else
    {
        printf("%d NAO e um numero primo!", n);
    }
    return 0;
}