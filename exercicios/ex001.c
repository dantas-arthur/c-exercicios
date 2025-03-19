#include <stdio.h>

int main() {
    // Comentários de linha única com dupla barra /
    /*
       Comentários de múltiplas linhas
       utilizando dupla barra com asteriscos
    */

    // int = números inteiros
    // long int = números inteiros longos
    // char = string de caractere único * usar aspas simples ''
    // char[num] = string de múltiplos caracteres * usar aspas duplas ""
    // float = números com ponto flutuante

    int idade = 20;
    float altura = 1.83;
    char nome[10] = "Arthur";
    char sexo[10] = "Masculino";

    // printf = print formatado * \n para pular linha
    // %d = variável inteira
    // %ld = variável inteira de dígito longo
    // %f = variável com ponto flutuante
    // %c = variável de caractere único (string)
    // %s = variável com múltiplos caracteres (string)

    printf("Olá, %s! Você é do sexo %s, tem %d anos de idade e mede %.2f de altura.", nome, sexo, idade, altura);
}