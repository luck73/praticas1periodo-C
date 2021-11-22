// 21.1.4011 Lucca Sales de Souza Teodoro turma 42

#include <stdio.h>

int main()
{

    int rotacoes;
    int vetorR[15];

    printf("Digite quantas rotacoes: \n");
    scanf("%d", &rotacoes);

    for (int i = 0; i > rotacoes; i++)
    {
        vetorR[i] = i;
    }
    for (int i = 0; i <= rotacoes; i++)
    {
        vetorR[i] = i;
    }

    for (int i = 0; i < 15; i++)
    {
        printf("%d ", vetorR[i]);
    }
    return 0;
}