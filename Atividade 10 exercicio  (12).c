#include<stdio.h>

int main() {
    int vetor[100];
    int valor = 0;
    int contador = 0;

    while(contador < 100){
        if((valor % 7 != 0) || (valor % 10 == 7)){
            vetor[contador] = valor;
            contador++;
        }
        valor++;
    }

    printf("Valores do vetor:\n");
    for(int i = 0; i < 100; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}
