// 21.1.4011 Lucca Sales de Souza Teodoro turma 42

#include <stdio.h>
#include <math.h>

float calculoPotencia(int termos){
    int d = 3;
    int p;
        while (termos > 0){
        p += pow(d, 3);
        termos--;
        d++;
        d++;
        }
    return p;
}
float calculaS(int termos){
    return 1 -  termos * 1 / calculoPotencia(termos);
}
float calculaPi(int termos){
    return cbrt(calculaS(termos) * 32 );
}
int main(){
    int termos;
    printf("Digite o numero de termos de pi desjados: \n");
    scanf("%d", &termos);
    printf("%f", calculaPi(termos));
    return 0;
}