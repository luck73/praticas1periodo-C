// 21.1.4011 Lucca Sales de Souza Teodoro turma 42

#include <stdio.h>

void calculoDuracao(int *duracao, int horainicio, int minutoinicio, int horatermino, int minutotermino);
void calculoDuracao(int *duracao, int horainicio, int minutoinicio, int horatermino, int minutotermino)
{
    if (horainicio > horatermino && minutoinicio > minutotermino)
    {
        *duracao = ((24 - horainicio) + horatermino) * 60 - ((60 - minutoinicio) + minutotermino);
    }
    else if (horainicio >= horatermino && minutoinicio <= minutotermino)
    {
        *duracao = ((24 - horainicio) + horatermino) * 60 - (minutotermino + minutoinicio);
    }
    else if (horainicio < horatermino && minutoinicio > minutotermino)
    {
        *duracao = (horatermino - horainicio) * 60 - ((60 - minutoinicio) + minutotermino);
    }
    else
    {
        *duracao = (horatermino - horainicio) * 60 - (minutotermino + minutoinicio);
    }
}

int main()
{
    int duracao, horainicio, minutoinicio, horatermino, minutotermino;
    printf("Digite o horario de inicio e termino do jogo (em horas e minutos): \n");
    scanf("%d", &horainicio);
    scanf("%d", &minutoinicio);
    scanf("%d", &horatermino);
    scanf("%d", &minutotermino);
    calculoDuracao(&duracao, horainicio, minutoinicio, horatermino, minutotermino);
    printf("A duracao do jogo e de %d minutos", duracao);
    return 0;
}
