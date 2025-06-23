#include <stdio.h>
 
int main() {
    int t, palpite[5], cont = 0;
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     scanf("%d", &t);
     
     for(int i = 0; i < 5; i++){
        scanf("%d", &palpite[i]);
        if(palpite[i] == t){
            cont++;
        }
     }
     
     printf("%d\n", cont);
 
    return 0;
}