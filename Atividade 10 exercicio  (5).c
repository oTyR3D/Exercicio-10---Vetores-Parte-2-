#include<stdio.h>

int main() {
    int vetor[5], X, multiplo = 0;

    printf("Digite o valor de X: ");
    scanf("%d", &X);

    for(int i = 0; i < 5; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    printf("\nValores multiplos de %d:", X);
    for(int i = 0; i < 5; i++){
        if (vetor[i] % X == 0){
            multiplo = vetor[i];
            printf(" %d", multiplo);
        }
    }

    return 0;
}
