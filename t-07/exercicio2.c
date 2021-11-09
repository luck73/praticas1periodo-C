#include <stdio.h>

void duplica(int *p);

int main(){
    int nro = 1000;
    duplica(&nro);
    printf("Valor duplicado: %d\n", nro);
    return 0;
}

void duplica(int *p){
    *p = *p * 2;
}