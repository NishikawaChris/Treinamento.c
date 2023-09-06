#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//argc = qtd de argumentos na linha de comando.
//argv[] = parâmetro.
int main(int argc, char *argv[]) {
    int indiceKey, indiceValue, indiceFlagCifra = 0;
    int existeFlagCifra, chave;
    char frase [200];
    
    //Aqui se obtém os índices dos parâmetros especiais de dentro do argv. 
    for(int i = 0; i < argc; i++) {
       if(strcmp(argv[i], "-k") == 0) {
        indiceKey = i;
       }

       if(strcmp(argv[i], "-v") == 0) {
        indiceValue = i;
       }

       if(strcmp(argv[i], "-c") == 0 || strcmp(argv[i], "-u") == 0) {
        indiceFlagCifra = i;
       }
    }
    existeFlagCifra = indiceFlagCifra;
    //printf("%d %d %d", indiceKey, indiceValue, indiceFlagCifra);
    
    chave = atoi(argv[indiceKey + 1]);

    if(existeFlagCifra){
       for(int i = (indiceValue); i < indiceFlagCifra; i++) {
        strcat(frase, argv[i]);
        strcat(frase, " ");
       }
       printf("\n%s\n", frase);
    } else {

    }
    return 0;
    }
    

