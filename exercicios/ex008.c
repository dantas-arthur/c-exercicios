#include <stdio.h>

int main()
{
    // Encontrar os valores pares de um array

    int numeros[8];

    for (int i = 0; i < 8; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);
    };

    int pares = 0;

    for (int j = 0; j < 8; j++)
    {
        if (numeros[j] % 2 == 0) {
            pares += 1;
        };
    };

    printf("Ao todo foram digitados %d números pares.", pares);

    return 0;
}