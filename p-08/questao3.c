// 21.1.4011 Lucca Sales de Souza Teodoro turma 42

#include <stdio.h>
#include <string.h>

int main()
{
    int letras = 0, ultimosobrenome = 0;
    char nome[70];
    char sobrenome[70];

    printf("Digite o seu nome completo: ");
    fgets(nome, 70, stdin);
    nome[strlen(nome) - 1] = '\0';

    for (int i = 0; i < strlen(nome); i++)
    {
        if (nome[i] == ' ')
        {
            ultimosobrenome = 0;
            continue;
        }
        ultimosobrenome++;
        letras++;
    }
    for (int i = strlen(nome) - ultimosobrenome, j = 0; i < strlen(nome); i++, j++)
    {
        sobrenome[j] = nome[i];
    }
    sobrenome[ultimosobrenome] = '\0';
    nome[strlen(nome) - (ultimosobrenome + 1)] = '\0';
    
    printf("%s, %s\n", sobrenome, nome);
    printf("Total de letras: %d\n", letras);
    printf("Total de letras do ultimo sobrenome: %d\n", ultimosobrenome);
    return 0;
}