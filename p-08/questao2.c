// 21.1.4011 Lucca Sales de Souza Teodoro turma 42

#include <stdio.h>
#include <string.h>

int main()
{
    int valor = 0, i = 0;
    char palavra[15], inversa[15];
    while (i == 0)
    {
        printf("\nDigite uma palavra ou fim para sair: ");
        scanf("%s", palavra);

        strcpy(inversa, palavra);
        strrev(inversa);
        valor = strcmp(palavra, inversa);

        if (valor == 0)
        {
            printf("\nA palavra %s e palindroma\n", palavra);
        }
        if (strcmp(palavra, "fim") != 0)
        {
            i++;
        }
        else
        {
            printf("\nA palavra %s nao e palindroma\n", palavra);
        }
    }
    return 0;
}
