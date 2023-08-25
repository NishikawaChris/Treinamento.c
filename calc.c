#include <stdio.h>

int main(){
    double numero1, numero2

    printf("Informe o primeiro número: ");
    scanf("%lf", &numero1);
    printf("Informe o segundo numero");
    scanf("%lf", &numero2);

    printf("Divisão = %.20lf\n", numero1 / numero2);
}