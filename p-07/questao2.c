// 21.1.4011 Lucca Sales de Souza Teodoro turma 42

#include <stdio.h>
#define D 30

double media(double vetor[], int dias)
{
    double resposta = 0;
    for (int i = 0; i < dias; i++)
    {
        resposta += *vetor;
        vetor++;
    }
    return resposta / dias;
}

int main()
{
    double vetor[D];

    printf("Digite o valor da temperatura de cada dia ao longo de %d dias: \n", D);
    for (int i = 0; i < D; i++)
    {
        scanf("%lf", &vetor[i]);
    }
    double valor = media(vetor, D);

    int maiores = 0;
    for (int i = 0; i < D; i++)
    {
        if (vetor[i] > valor)
        {
            maiores++;
        }
    }
    int menores = 0;
    for (int i = 0; i < D; i++)
    {
        if (vetor[i] < valor)
        {
            menores++;
        }
    }

    printf("Foram %d dias com temperaturas acima da media e %d dias com temperaturas abaixo da media.", maiores, menores);

    return 0;
}