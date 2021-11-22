// 21.1.4011 Lucca Sales de Souza Teodoro turma 42

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, nmrAleatorio;
    int vetor[100000];
    int vetorA[n + 1];

    printf("Digite um numero menor ou igual a 500: \n");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        vetorA[i] = 0;
    }
    for (int i = 0; i < 100000; i++)
    {
        nmrAleatorio = 1 + rand() % n;
        vetor[i] = 1 + rand() % n;
        vetorA[nmrAleatorio] += 1;
    }
    for (int i = 0; i <= n; i++)
    {
        if (i != 0)
        {
            printf("O inteiro %d foi gerado %d vezes.\n", i, vetorA[i]);
        }
    }

    return 0;
}