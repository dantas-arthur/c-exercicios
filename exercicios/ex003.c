#include <stdio.h>

int main() {
    /*
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // if/else simples *similar ao JavaScript
    if(idade >= 18) {
        printf("Como você tem %d anos, você é maior de idade.", idade);
    } else {
        printf("Como você tem %d anos, você é menor de idade.", idade);
    }

    // if/else encadeado
    // & = ou && = e
    // else if = elif
    */

    /*
    float salario;

    printf("Digite o seu salário: ");
    scanf("%f", &salario);

    if(salario < 1000) {
        printf("Baixa renda.");
    } else if(salario >= 1000 && salario < 2000) {
        printf("Classe média.");
    } else if(salario >= 2000 && salario < 5000) {
        printf("Classe alta.");
    } else {
        printf("Parasita do governo.");
    }
    */

    // if/else aninhado
    char sexo;
    int idade;

    printf("Digite seu sexo [M/F]: ");
    scanf("%c", &sexo);
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18) {
        if(sexo == 'M') {
            printf("Você é um HOMEM maior de idade.");
        } else if(sexo == 'F') {
            printf("Você é uma MULHER maior de idade.");
        } else {
            printf("Sexo não reconhecido. Pessoa maior de idade.");
        }
    } else if(idade < 18) {
        if(sexo == 'M') {
            printf("Você é um HOMEM menor de idade.");
        } else if(sexo == 'F') {
            printf("Você é uma MULHER menor de idade.");
        } else {
            printf("Sexo não reconhecido. Pessoa menor de idade.");
        }
    }

    return 0;
}