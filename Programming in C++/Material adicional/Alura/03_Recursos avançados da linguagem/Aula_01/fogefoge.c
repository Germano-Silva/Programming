#include <stdio.h>
#include <stdlib.h>

int main () {
    //matrix de 5 x 10
    char mapa[5][10+1];

    mapa[0][0] = '|';
    mapa[4][9] = '@';

    FILE *f;
    f = fopen("mapa.txt", "r");
    if(f == NULL){
        printf("Erro na leitura do mapa\n");
        exit(1);
    }
    for (int i = 0; i < 4; i++) {
        fscanf(f, "%s", &mapa[i]);

    }

    for(int i = 0; i < 4; i++) {
        printf("%s\n", mapa[i]);
    }
    fclose(f);

}
