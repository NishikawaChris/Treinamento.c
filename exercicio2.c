#include <stdio.h>

int main(){
    int numbovinos, ano = 0, atual, nascimento, morte, final;

    printf("Informe a quantidade de bovinos: ");
    scanf("%d", &numbovinos);

    for(int atual = 10; atual < numbovinos; atual = atual + (atual / 3) - (atual /4)){
        ano++;
    }
    printf("ano = %d\n", ano);
}