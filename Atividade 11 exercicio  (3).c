#include <stdio.h>

int converterFahrenheitParaCelsius(int temperaturaF)
{
    int temperaturaC;
    temperaturaC = (temperaturaF - 32.0) * (5.0 / 9.0);
    return temperaturaC;
}

int main()
{
    int temperaturaF, temperaturaC;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%d", &temperaturaF);

    temperaturaC = converterFahrenheitParaCelsius(temperaturaF);

    printf("Temperatura em Celsius: %d\n", temperaturaC);

    return 0;
}
