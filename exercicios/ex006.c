#include <stdio.h>

int main()
{
    // Soma de valores em um array

    int numeros[7];

    for (int i = 0; i < 7; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);
    };

    int soma = 0;

    for (int j = 0; j < 7; j++)
    {
        soma += numeros[j];
    };

    printf("A soma dos números digitados é igual a: %d", soma);

    return 0;
}