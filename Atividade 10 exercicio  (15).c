#include<stdio.h>

int main() {
    int V[10];
    int V1[10];
    int V2[10];
    int contador1 = 0, contador2 = 0;

    for(int i = 0; i < 10; i++){
        V1[i] = -1;
        V2[i] = -1;
    }

    for (int i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &V[i]);
    }

    for(int i = 0; i < 10; i++){
        if(V[i] % 2 != 0){
            V1[contador1++] = V[i];
        } else {
            V2[contador2++] = V[i];
        }
    }

    printf("\nValores de V1:\n");
    for(int i = 0; i < 10 && V1[i] != -1; i++){
        printf("%d ", V1[i]);
    }

    printf("\nValores de V2:\n");
    for(int i = 0; i < 10 && V2[i] != -1; i++){
        printf("%d ", V2[i]);
    }

    return 0;
}