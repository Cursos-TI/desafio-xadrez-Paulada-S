#include <stdio.h>
int main(){

    int a=1, b=0, c=0, m=0, n=0,o=0;
    while (a <= 5)
    {
        printf("Bispo: Frente, direita\n");
        a++;
    }
    do
    {
        printf("Rainha: Esquerda\n");
        b++;
    } while (b <= 7);
    for (c = 0; c <= 4 ; c++)
    {
        printf("Torre: Frente\n");
    }
    for(n=0;n<1;n++){
        o=0;
        while(o<=1){
            printf("Cavalo: Frente\n");
            o++;
        }
        printf("Cavalo: Direita\n");
    }
}