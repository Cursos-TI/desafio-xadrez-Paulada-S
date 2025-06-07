#include <stdio.h>
int main(){
    int a=1, b=0, c=0;
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
    
}