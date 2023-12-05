#include<stdio.h>
#include<math.h>

int main() {
    int array_numeros[10]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float resultado_desvio_padrao = 0, soma_elementos = 0, soma_quadrados_diferencas = 0, media_elementos = 0;

    for(int i = 0; i < 10; i++){
        soma_elementos += array_numeros[i];
    }
    media_elementos = soma_elementos / 10;
    for(int i = 0; i < 10; i++){
        soma_quadrados_diferencas += pow(array_numeros[i] - media_elementos, 2);
    }

    resultado_desvio_padrao = sqrt(soma_quadrados_diferencas / 9);
    printf("Resultado do Desvio Padrão: %.4f", resultado_desvio_padrao);

    return 0;
}
