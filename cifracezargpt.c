#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para cifrar uma frase
void cifrar(char *frase, int chave) {
    int i;
    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] >= 'A' && frase[i] <= 'Z') {
            frase[i] = ((frase[i] - 'A' + chave) % 26) + 'A';
        } else if (frase[i] >= 'a' && frase[i] <= 'z') {
            frase[i] = ((frase[i] - 'a' + chave) % 26) + 'a';
        }
    }
}

// Função para decifrar uma frase
void decifrar(char *frase, int chave) {
    cifrar(frase, -chave); // Decifração é o mesmo que cifrar com o deslocamento negativo
}

int main() {
    char frase[100];
    int chave;
    int escolha;

    printf("Digite a frase a ser cifrada/decifrada: ");
    fgets(frase, sizeof(frase), stdin);

    printf("Digite a chave de deslocamento: ");
    scanf("%d", &chave);

    printf("Escolha:\n");
    printf("1. Cifrar\n");
    printf("2. Decifrar\n");
    printf("3. Sair\n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            cifrar(frase, chave);
            printf("Frase cifrada: %s\n", frase);
            break;
        case 2:
            decifrar(frase, chave);
            printf("Frase decifrada: %s\n", frase);
            break;
        case 3:
            printf("Programa encerrado.\n");
            break;
        default:
            printf("Escolha inválida.\n");
            break;
    }

    return 0;
}