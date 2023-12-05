#include<stdio.h>

int main() {
    int array_numeros[10];
    int contador_primo = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &array_numeros[i]);
    }

    for(int i = 0; i < 10; i++){
        contador_primo = 0;
        for(int j = 1; j <= array_numeros[i]; j++) {
            if(array_numeros[i] % j == 0) {
                contador_primo++;
            }
        }
        if (contador_primo == 2) {
            printf("\nNúmero primo: %d na posição: %d", array_numeros[i], i);
        }
    }

    return 0;
}
