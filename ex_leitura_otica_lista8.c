#include <stdio.h>
#include <stdlib.h>
 
typedef struct Questao{
    int a, b, c, d, e;
}Questao;
 
int main() {
    int n;
    Questao *p;
    char r;
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     scanf("%d", &n);
     while(n != 0){
         p = malloc(n * sizeof(Questao));
         for(int i = 0; i < n; i++){
             int cont = 0;
             r = '*';
             scanf("%d %d %d %d %d", &p[i].a, &p[i].b, &p[i].c, &p[i].d, &p[i].e);
             if(p[i].a <= 127){
                 r = 'A';
                 cont++;
             }
             if(p[i].b <= 127){
                 r = 'B';
                 cont++;
             }
             if(p[i].c <= 127){
                 r = 'C';
                 cont++;
             }
             if(p[i].d <= 127){
                 r = 'D';
                 cont++;
             }
             if(p[i].e <= 127){
                 r = 'E';
                 cont++;
             }
             if(cont != 1){
                 r = '*';
             }
             printf("%c\n", r);
         }
         scanf("%d", &n);
         free(p);
     }
    return 0;
}