#include <stdio.h>

int tipoCaractere(char c);

int main() {
    char c;
    printf("Digite o caractere:\n");
    scanf("%c", &c);

    int tipo = tipoCaractere(c);
    if ( tipo == 1){
        printf("Caractere e uma letra minuscula.\n");
    }
    else if (tipo == 2){
        printf("Caractere e uma letra maiuscula.\n");
    }
    else {
        printf("Caractere nao e uma letra.\n");
    }
    return 0;
}

int tipoCaractere(char c){
    if ( c >= 'a' && c <= 'z')
        return 1;
    if (c >= 'A' && c <= 'Z')
        return 2;
    return 0;

}

