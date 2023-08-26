//A cada ano, n/3 novos bovinos nascem, e n/4 morrem.
//Quantos anos levam para se atingir uma certa população de bovinos informada pelo usuário sabendo que começamos com 10 bovinos?

#include <stdio.h>

int main(){
//A variável "bovinos" refere-se à quantidade inicial de cabeças de gado que o projeto começou.
//A variável "qtdFinal" refere-se à meta que se deseja alcançar.
int bovinos = 10, qtdFinal, ano = 0;
    printf("Declare o número de bovinos que você desejará possuir: ");
    scanf("%d", &qtdFinal);

    //Ao se considerar a qtd de animais que nascem e morrem a cada ano, à variável "bovinos" deverá ser somada a qtd de nascimentos subtraída da qtd de mortes.
    while(bovinos < qtdFinal){
        ano++;
        bovinos = bovinos + (bovinos / 3) - (bovinos / 4);
    //Observe-se que a variável while representa o aumento crescente da qtd de gado ao longo dos anos.
    }
    printf("Para alcançar a meta de %d bovinos, serão necessários %d anos.\n", qtdFinal, ano);
}