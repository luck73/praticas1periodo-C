// 21.1.4011 Lucca Sales de Souza Teodoro turma 42

#include <stdio.h>

void converterCelsius(float celsius, float *fahrenheit, float *kelvin);
void converterCelsius(float celsius, float *fahrenheit, float *kelvin)
{
    *fahrenheit = (celsius / 5) * (9) + 32;
    *kelvin = celsius + 273.15;
}

int main()
{
    float celsius, fahrenheit, kelvin;
    printf("Digite o valor em Celsius: ");
    scanf("%f", &celsius);
    if (celsius <= -273.15)
    {
        printf("Temperatura invalida\n");
    }
    else
    {
        converterCelsius(celsius, &fahrenheit, &kelvin);
        printf("%.2f celsius = %.2f fahrenheit\n", celsius, fahrenheit);
        printf("%.2f celsius = %.2f kelvin\n", celsius, kelvin);
    }
    return 0;
}