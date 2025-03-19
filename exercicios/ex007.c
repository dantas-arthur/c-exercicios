#include <stdio.h>

int main()
{
    // Encontrar o maior valor dentro de um array

    int numeros[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);
    };

    int maior = 0;
    for (int j = 0; j < 10; j++)
    {
        if (numeros[j] > maior) {
            maior = numeros[j];
        };
    };

    printf("O maior número digitado foi: %d", maior);

    return 0;
}