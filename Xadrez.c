#include <stdio.h>
//int main (){
void recursividade(int z){
    for (int a=1;a<=5; a++){
    printf("Torre: Direita %d\n",a);
    }for (int b=1;b<=5; b++){
    printf("Bispo: Direita-frente %d\n",b);
    }for (int c=1;c<=8; c++){
    printf("Rainha: Esquerda %d\n",c);
    }
    }
int main(){
    int n=1;
    recursividade(1);
do{
    int m=1;
    do{
   printf("Cavalo: Frente %d\n", m);
   m++;
} while (m<=2);
printf("Cavalo: Direita %d\n", n);
n++;
 } while (n<=1);
}
//for (int a=10, b=10, c=24;a<15,b<15,c>15; a++,b++,c--){
//        printf("Torre:%d\n",a);
 //       printf("Bispo:%d\n",b);
 //       printf("Rainha:%d\n",c);
 //   }
/*
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
*/
