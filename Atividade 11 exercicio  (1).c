#include <stdio.h>

int encontrarMaior(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    int num1, num2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    int resultado = encontrarMaior(num1, num2);

    printf("O maior numero e: %d\n", resultado);

    return 0;
}