#include<stdio.h>

int main() {
    int vetor[5];
    int impar[5];
    int contador_impar = 0;

    for(int i = 0; i < 5; i++){
        do{
            printf("Digite um valor entre 0 e 50: ");
            scanf("%d", &vetor[i]);
            if(vetor[i] < 0 || vetor[i] > 50){
                printf("Valor inválido. ");
            }
        }while(vetor[i] < 0 || vetor[i] > 50);

        if(vetor[i] % 2 != 0){
            impar[contador_impar] = vetor[i];
            contador_impar++;
        }
    }

    printf("\nValores:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
        if((i + 1) % 2 == 0){
            printf("\n");
        }
    }

    printf("\nÍmpares:\n");
    for(int i = 0; i < contador_impar; i++){
        printf("%d ", impar[i]);
        if((i + 1) % 2 == 0){
            printf("\n");
        }
    }

    return 0;
}
