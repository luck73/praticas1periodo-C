// 21.1.4011 Lucca Sales de Souza Teodoro turma 42

#include <stdio.h>

int main()
{
    int alunos[15];
    int notas[30];
    for (int i = 0; i < 15; i++)
    {
        alunos[i] = i + 1;
        printf("Digite as notas da provas do aluno %d: \n", alunos[i]);
        scanf("%d", &notas[i]);
        scanf("%d", &notas[i + 1]);
    }
    for (int i = 0; i < 15; i++)
    {
        if (notas[i] + notas[i + 1] / 2 >= 60)
        {
            printf("Aluno %d aprovado. \n", alunos[i]);
        }
        else
        {
            printf("Aluno %d reprovado. \n", alunos[i]);
        }
    }
    return 0;
}