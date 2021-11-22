// 21.1.4011 Lucca Sales de Souza Teodoro turma 42

#include <stdio.h>
#include <string.h>

int main()
{
    char texto[100];
    
    printf("Digite o texto para censurar: \n");
    fgets(texto, 100, stdin);
    texto[strlen(texto) - 1] = '\0';
    
    for (int i = 0; i < strlen(texto); i++)
    {
        switch (texto[i])
        {
        case 'a':
            texto[i] = '@';
            break;
        case 'e':
            texto[i] = '_';
            break;
        case 'i':
            texto[i] = '|';
            break;
        case 'o':
            texto[i] = '0';
            break;
        case 'u':
            texto[i] = '#';
            break;
        case 's':
            texto[i] = '$';
            break;
        default:
            break;
        }
    }
   
    printf("\n");
    printf("%s\n", texto);
    return 0;
}