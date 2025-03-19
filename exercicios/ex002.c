#include <stdio.h>

int main() {
    char nome[10];
    int idade;
    char sexo[10];
    float altura;
    long int numero_longo = 40028922;

    // Utilize scanf para capturar inputs do usuário
    printf("Digite seu nome: ");
    scanf("%s", nome); // Sem & para strings de múltiplos caracteres
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu sexo: ");
    scanf("%s", sexo); // Sem & para strings de múltiplos caracteres
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Seu nome é %s, você é do sexo %s, tem %d anos de idade e mede %.2f de altura.\n", nome, sexo, idade, altura);
    printf("Ligue para o número %ld para ganahr um PlayStation.", numero_longo);
}
