// 21.1.4011 Lucca Sales de Souza Teodoro turma 42

#include <stdio.h>
#include <math.h>

int digitos(long long cpf, int identificador)
{
    int d, x = 11;
    long long a = 10, b = 1;
    while (x > identificador)
    {
        a = a * 10;
        b = b * 10;
        x = x - 1;
    }
    d = cpf % a / b;
    return d;
}
int verificador(long long cpf)
{

    int x1 = 10;
    int x2 = 11;
    int identificador = 1;
    int d1 = 0;
    int d2 = 0;
    int r = 0;
    int resto1;
    int resto2;
    long total = 0;
    while (x1 >= 2)
    {
        total = total + (digitos(cpf, identificador) * x1);
        identificador = identificador + 1;
        x1 = x1 - 1;
    }
    resto1 = (total * 10) % 11;
    if (resto1 == 10)
    {
        resto1 = 0;
    }
    if (resto1 == digitos(cpf, 10))
    {
        d1 = 1;
    }
    identificador = 1;
    total = 0;
    while (x2 >= 2)
    {
        total = total + (digitos(cpf, identificador) * x2);
        identificador = identificador + 1;
        x2 = x2 - 1;
    }
    resto2 = (total * 10) % 11;
    if (resto2 == 10)
    {
        resto2 = 0;
    }
    if (resto2 == digitos(cpf, 11))
    {
        d2 = 1;
    }
    if (d1 == 1 && d2 == 1)
    {
        r = 1;
    }

    return r;
}

int main()
{
    long long cpf;
    printf("Digite o cpf(sem pontuacoes): \n");
    scanf("%lld", &cpf);
    if (verificador(cpf) == 1)
    {
        printf("O cpf %lld e valido.\n", cpf);
    }
    else
    {
        printf("O cpf %lld nao e valido\n", cpf);
    }
    return 0;
}