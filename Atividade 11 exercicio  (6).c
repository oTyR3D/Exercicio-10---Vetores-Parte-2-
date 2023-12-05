#include <stdio.h>

float calcularIMC(int peso, int altura)
{
    float IMC;
    IMC = (float)peso / (altura * altura);
    return IMC;
}

int main()
{
    int peso, altura;

    printf("Digite o peso da pessoa: ");
    scanf("%d", &peso);

    printf("Digite a altura da pessoa: ");
    scanf("%d", &altura);

    float IMC = calcularIMC(peso, altura);
    printf("O IMC desta pessoa é: %.2f\n", IMC);

    return 0;
}
