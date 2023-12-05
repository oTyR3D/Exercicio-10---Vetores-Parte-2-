#include<stdio.h>

int main() {
    int vetor[5];
    int codigo;

    for(int i = 0; i < 5; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    do {
        printf("\nDigite um código (1 para exibir na ordem original, 2 para exibir na ordem inversa): ");
        scanf("%d", &codigo);

        if(codigo == 1) {
            printf("Valores na ordem original: ");
            for(int i = 0; i < 5; i++) {
                printf("%d ", vetor[i]);
            }
        } else if(codigo == 2) {
            printf("Valores na ordem inversa: ");
            for(int i = 4; i >= 0; i--) {
                printf("%d ", vetor[i]);
            }
        } else {
            printf("\nCódigo inválido");
        }

    } while(codigo != 1 && codigo != 2);

    return 0;
}
