#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[10];
    int i;
    int maior, menor;

    for (i = 0; i < 10; i++) {
        printf("Digite o elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    maior = vetor[0];
    menor = vetor[0];
    for (i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);
    printf("Diferença entre eles: %d\n", maior - menor);

    return 0;
}
