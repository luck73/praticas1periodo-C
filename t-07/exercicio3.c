#include <stdio.h>

void dist(float metros, float *jardas, float *pes, float *polegadas);

void dist(float metros, float *jardas, float *pes, float *polegadas){
    *jardas = 1.094 * metros;
    *pes = 3.281 * metros;
    *polegadas = 39.3701 * metros;
}

int main(){
    float metros, jardas, pes, polegadas;
    printf("Digite o valor em metros:  ");
    scanf("%f", &metros);
    dist(metros, &jardas, &pes, &polegadas);
   
    printf("%f metros = %.4f jardas\n", metros, jardas);
    printf("%f metros = %.4f pes\n", metros, pes);
    printf("%f metros = %.4f polegadas\n", metros, polegadas);
    return 0;
}

