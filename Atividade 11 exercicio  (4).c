#include <stdio.h>
#include <math.h>

double calcularVolumeCilindroCircular(double altura, double raio)
{
    double volume;
    const double pi = 3.1414592;
    volume = pi * pow(raio, 2) * altura;
    return volume;
}

int main()
{
    double altura, raio;

    printf("Digite a altura de um cilindro circular: ");
    scanf("%lf", &altura);

    printf("Digite o raio de um cilindro circular: ");
    scanf("%lf", &raio);

    double volumeCilindro = calcularVolumeCilindroCircular(altura, raio);
    printf("O volume de um cilindro circular é: %lf\n", volumeCilindro);

    return 0;
}
