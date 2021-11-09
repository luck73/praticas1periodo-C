#include <stdio.h>

void imprimirClasseEleitoral(int idade) {
    if (idade < 16){
        printf("Nao-eleitor!\n");
    }
    else if (idade < 18 || idade > 65){
        printf("Eleitor facultativo!\n");
    }
    else{
        printf("Eleitor obrigatorio!\n");
    }
}

int main(){
    int idade;
    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    imprimirClasseEleitoral(idade);
    return 0;
}