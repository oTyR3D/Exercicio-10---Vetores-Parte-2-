#include <stdio.h>
#include <math.h>

float calcularVolumeEsfera(int raio)
{
    float volume;
    const double pi = 3.1414592;
    volume = (4.0 / 3.0) * pi * pow(raio, 3);
    return volume;
}

int main()
{
    int raio;

    printf("Digite o raio de uma esfera: ");
    scanf("%d", &raio);

    float volumeEsfera = calcularVolumeEsfera(raio);
    printf("O volume de uma esfera é: %2.f\n", volumeEsfera);

    return 0;
}
