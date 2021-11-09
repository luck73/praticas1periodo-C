// 21.1.4011 Lucca Sales de Souza Teodoro turma 42

#include <stdio.h>

long long fat(int n);
long long fat(int n)
{
    long long fatorial;
    fatorial = n;
    while (fatorial > 1)
    {
        n *= (fatorial - 1.0);
        fatorial--;
    }
    return n;
}

int main()
{
    long long fatorial;
    int n = 1;
    printf("Digite o valor de n:\n");
    scanf("%d", &n);
    fatorial = fat(n);
    printf("%d! = %lld", n, fatorial);
    return 0;
}