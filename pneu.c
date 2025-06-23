#include <stdio.h>
 
typedef struct Pneu{
    int n;
    int m;
}Pneu;
 
int main() {
    Pneu p1;
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     scanf("%d", &p1.n);
     scanf("%d", &p1.m);
     
     int diferenca;
     diferenca = p1.n - p1.m;
     
     printf("%d\n", diferenca);
 
    return 0;
}