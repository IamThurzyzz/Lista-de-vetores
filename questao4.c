#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool primo(int n) {
    int i;
    if (n <= 1) {
        return false;
    }
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int vetor[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite o elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("Elementos primos:\n");
    for (i = 0; i < 10; i++) {
        if (primo(vetor[i])) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");

    return 0;
}
