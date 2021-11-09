#include <stdio.h>

int aprovado(int, int, double);

int aprovado(int aulas, int faltas, double nota ){
    double faltasPerc = (double) faltas / (double) aulas;
    if (faltasPerc <= 0.25 && nota >= 6.0){
        return 1; 
}
return 0;
}

int main(){
    int aulas, faltas;
    double nota;
    printf("Digite o numero de aulas, de faltas e sua nota\n");
    scanf("%d", &aulas);
    scanf("%d", &faltas);
    scanf("%lf", &nota);

    if (aprovado(aulas, faltas, nota) == 1){
        printf("Aprovado parabens !!!\n");
    }
    else {
        printf("Reprovado....\n");
    }
    return 0;
}