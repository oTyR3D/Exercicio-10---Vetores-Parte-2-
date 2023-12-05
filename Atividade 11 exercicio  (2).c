#include <stdio.h>

void mostrarMesEDias(int num)
{
    char *nomesDosMeses[] = {"janeiro", "fevereiro", "março", "abril", "maio", "junho",
                              "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

    int diasDoMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (num >= 1 && num <= 12)
    {
        printf("Mês: %s\n", nomesDosMeses[num - 1]);
        printf("Quantidade de dias: %d\n", diasDoMes[num - 1]);
    }
    else
    {
        printf("Número inválido. Por favor, digite um número de 1 a 12.\n");
    }
}

int main()
{
    int numero;

    printf("Digite um número de 1 a 12: ");
    scanf("%d", &numero);

    mostrarMesEDias(numero);

    return 0;
}
