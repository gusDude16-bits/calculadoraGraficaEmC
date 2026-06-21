#include <stdio.h>
#include <math.h>
#define tamanhoPlano 30

void desenharPlanoCartesiano() {
    int i,j;
    for (i=0; i<tamanhoPlano; i++) {
        if(i == tamanhoPlano/2) {
            for (j=0; j<tamanhoPlano*2; j++) {
                if (j != tamanhoPlano)
                    printf("-");
                else
                    printf("0");
            }
            printf("> x\n");
        } else {
            for (j=0; j<tamanhoPlano-1; j++) {
                printf(" ");
            }
            printf("%s\n", (i==0) ? "/_\\ f(x)" : " |");
        }
    }
}

int main() {
    desenharPlanoCartesiano();
    getchar();
    return 0;
}