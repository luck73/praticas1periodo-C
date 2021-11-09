// 21.1.4011 Lucca Sales de Souza Teodoro turma 42
#include <stdio.h>

int main(){

int linha, coluna, l, c;

printf("Movimento de um bispo no xadrez\n");;
printf("Digite a linha que o bispo se encontra: ");
scanf("%d", &linha);
printf("Digite a coluna que o bispo se encontra: ");
scanf("%d", &coluna);

printf("\nMovimentos possiveis:\n\n");
printf("      1  2  3  4  5  6  7  8  \n");
printf("   -------------------------\n");

l = 1;
while(l <= 8){
    printf("%3d |", l);
    l++;
    
    c = 1;
    while(c <= 8){
        if(l == linha && c == coluna){
            printf(" o ");
        }
        if(l == linha || c == coluna){
            printf(" x ");
        }
        else{
            printf(" - ");
        }
        c++;
    }
    printf("\n");
}
return 0;
}