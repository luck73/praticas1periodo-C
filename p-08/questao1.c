// 21.1.4011 Lucca Sales de Souza Teodoro turma 42

#include <stdio.h>

int main()
{
    int matA[10][10];
    int matB[10][10];
    int matC[10][10];
    int ma, na, mb, nb;

    printf("Digite as dimensoes m e n da matriz A:\n");
    scanf("%d %d", &ma, &na);
    for (int i = 0; i < ma; i++)
    {
        for (int j = 0; j < na; j++)
        {
            printf("Digite o valor de matriz [%d][%d]:\n", i, j);
            scanf("%d", &matA[i][j]);
        }
    }
    printf("Digite as dimensoes m e n da matriz B:\n");
    scanf("%d %d", &mb, &nb);
    for (int i = 0; i < mb; i++)
    {
        for (int j = 0; j < nb; j++)
        {
            printf("Digite o valor de matriz [%d][%d]:\n", i, j);
            scanf("%d", &matB[i][j]);
        }
    }

    if (na == mb)
    {
        for (int i = 0; i < ma; i++)
        {
            for (int j = 0; j < nb; j++)
            {
                int aux = 0;
                matC[i][j] = 0;
                for (int k = 0; k < mb; k++)
                {
                    aux += matA[i][k] * matB[k][j];
                }

                matC[i][j] = aux;
            }
        }

        for (int i = 0; i < ma; i++)
        {
            for (int j = 0; j < nb; j++)
            {
                printf("%d ", matC[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    else
    {
        printf("\n\n Nao ha com multiplicar as matrizes dadas ");
    }

    return 0;
}