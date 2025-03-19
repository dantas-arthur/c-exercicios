#include <stdio.h>

int main() {

    // Laço de repetição for

    int numeros[5];

    // o primeiro é executado somente uma vez
    // o segundo é executado todas as vezes (condição)
    // o terceiro só é executado a partir do segundo loop
    for (int i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);
    };

    // Imprime o array na ordem inversa
    for (int j = 4; j >= 0; j--) {
        printf("%d\n", numeros[j]);
    };

    return 0;
}