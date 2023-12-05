#include<stdio.h>

int main() {
    
    int vetor[5];

    for(int i = 0; i < 5; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 5; i++){
        if(vetor[i] < 0){
            vetor[i] = 0;
        }

        printf("\nValor %d: %d", i+1, vetor[i]);
    }

    return 0;
}
