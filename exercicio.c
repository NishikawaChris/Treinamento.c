#include <stdio.h>

int main() {
    char nome[20], telefone[20];
    int idade;

        printf("Escreva o seu nome: ");
        scanf("%s", nome);

        printf("Escreva seu número: ");
        scanf("%s", telefone);

        printf("Qual a sua idade: ");
        scanf("%d", &idade);

        printf("Seu nome é: %s\nSeu telefone é: %s\nSua idade é: %d\n", nome, telefone, idade);
}