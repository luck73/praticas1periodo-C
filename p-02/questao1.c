#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float grausParaRadianos(float g)
{
    return 3.141593 * g / 180.0;
}
float radianosParaGraus(float r)
{
    return r * 180 / 3.141593;
}

float celsiusParaFahrenheit(float c)
{
    if (c <= -273.15)
    {
        return 0;
    }
    return (c / 5) * (9) + 32;
}
float celsiusParaKelvin(float c)
{
    if (c <= -273.15)
    {
        return 0;
    }
    return c + 273.15;
}
float fahrenheitParaCelsius(float f)
{
    if (f <= -459.67)
    {
        return 0;
    }
    return (f - 32) / (9) * 5;
}
float fahrenheitParaKelvin(float f)
{
    if (f <= -459.67)
    {
        return 0;
    }
    return (f - 32) / (9) * 5 + 273.15;
}
float kelvinParaCelsius(float k)
{
    if (k < 0)
    {
        return 0;
    }
    return k - 273.15;
}
float kelvinParaFahrenheit(float k)
{
    if (k < 0)
    {
        return 0;
    }
    return (k - 273) / (5) * 9 + 32;
}

int main()
{

    int opcao, opcao2, opcao3;
    float graus, radianos, celsius, fahrenheit, kelvin;

    printf("### CONVERSOR DE UNIDADES ###\n\n1) Angulo\n2) Temperatura\n\nDigite uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\nQual a unidade de origem?\n\n1) Graus\n2) Radianos\n\nSelecione uma opcao: ");
        scanf("%d", &opcao2);
        break;
    case 2:
        printf("\nQual a unidade de origem?\n\n1) Celsius\n2) Fahrenheit\n3) Kelvin\n\nSelecione uma opcao: ");
        scanf("%d", &opcao3);
        break;
    default:
        printf("\nOpcao invalida");
        break;
    }
    switch (opcao2)
    {
    case 1:
        printf("\nDigite o valor em graus: ");
        scanf("%f", &graus);
        radianos = grausParaRadianos(graus);
        printf("\nValor em radianos: %f", radianos);
        break;
    case 2:
        printf("\nDigite o valor em radianos: ");
        scanf("%f", &radianos);
        graus = radianosParaGraus(radianos);
        printf("\nValor em graus: %f", graus);
        break;
    default:
        printf("\nOpcao invalida");
        break;
    }
    switch (opcao3)
    {
    case 1:
        printf("\nDigite o valor em Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = celsiusParaFahrenheit(celsius);
        kelvin = celsiusParaKelvin(celsius);
        printf("\nValor em Fahrenheit: %.2f\nValor em Kelvin: %.2f", fahrenheit, kelvin);
        break;
    case 2:
        printf("\nDigite o valor em Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = fahrenheitParaCelsius(fahrenheit);
        kelvin = fahrenheitParaKelvin(fahrenheit);
        printf("\nValor em Celsius: %.2f\nValor em Kelvin: %.2f", celsius, kelvin);
        break;
    case 3:
        printf("\nDigite o valor em Kelvin: ");
        scanf("%f", &kelvin);
        celsius = kelvinParaCelsius(kelvin);
        fahrenheit = kelvinParaFahrenheit(kelvin);
        printf("\nValor em Celsius: %.2f\nValor em Fahrenheit: %.2f", celsius, fahrenheit);
        break;
    default:
        printf("\nOpcao invalida");
        break;
    }
    return 0;
}
