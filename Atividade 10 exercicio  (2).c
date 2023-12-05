#include<stdio.h>

int main() {
    int vetor[20];

    for(int i = 0; i < 20; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 20; i++){
        for(int j = i + 1; j < 20; j++){
            if(vetor[i] == vetor[j]){
                vetor[j] = -1;
            }
        }
    }

    printf("Vetor sem números repetidos:\n");
    for(int i = 0; i < 20; i++){
        if(vetor[i] != -1){ 
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}
