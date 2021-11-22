// 21.1.4011 Lucca Sales de Souza Teodoro turma 42

#include <stdio.h>

int main()
{
    int vetor[10];
    vetor[0] = 1;
    vetor[1] = 1;

    for (int i = 2; i < 10; i++)
    {
        vetor[i] = vetor[i - 1] + vetor[i - 2];
    }

    printf(" Os dez primeiros numero sao %d", 1);

    for (int i = 1; i < 10; i++)
    {
        printf(", %d", vetor[i]);
    }

    return 0;
}