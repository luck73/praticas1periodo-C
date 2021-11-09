#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int n1, n2;
    printf("Digite os valores de n1 e n2:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    int nmrAleatorio = n1 + rand() % (n2 - n1 +1);
    printf("Numero aleatorio = %d\n");
    return 0;
}