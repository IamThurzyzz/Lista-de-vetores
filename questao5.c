#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int vetor[8];
    int i;
    int num;
    bool encontrado = false;

    for (i = 0; i < 8; i++) {
        printf("Digite o elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("Digite o número a ser pesquisado: ");
    scanf("%d", &num);

    for (i = 0; i < 8; i++) {
        if (vetor[i] == num) {
            printf("Número encontrado na posição %d\n", i+1);
            encontrado = true;
        }
    }
    if (!encontrado) {
        printf("Número não existe no vetor\n");
    }

    return 0;
}
