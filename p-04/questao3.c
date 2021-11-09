// 21.1.4011 Lucca Sales de Souza Teodoro turma 42

#include <stdio.h>

int main()
{
    int x, y, espacos, contadorespacos, contadorlinhas, contadorasteriscos;
    printf("Digite os valores de x e y: \n");
    scanf("%d", &x);
    scanf("%d", &y);
    if (x > y)
    {
        printf("Erro: x deve ser menor que y.");
    }
    else if (x % 2 == 0 && y % 2 == 0)
    {
        espacos = (y - x / 2);
        contadorlinhas = espacos;
        do
        {
            contadorespacos = 0;
            do
            {
                printf(" ");
                contadorespacos++;
            } while (contadorespacos <= espacos);
            espacos--;
            contadorasteriscos = 0;
            do
            {
                printf("*");
                contadorasteriscos++;
            } while (contadorasteriscos < x);
            x += 2;
            contadorlinhas--;
            printf("\n");
        } while (contadorlinhas >= 0);
    }
    else
    {
        printf("Apenas numeros pares sao aceitos.");
    }

    return 0;
}
