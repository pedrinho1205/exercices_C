#include <stdio.h>
#include <string.h>
 
int main() {
    int n, m;
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     scanf("%d", &n);
     
     for(int i = 0; i < n; i++){
         scanf("%d", &m);
         char alfa[m + 1];
         scanf("%s", alfa);
         
         char copia[m + 1];
         strcpy(copia, alfa);
         
         int cont = 0;
         
         for(int j = 0; j < m - 1; j++){
             for(int k = j + 1; k < m; k++){
                 if(copia[j] > copia[k]){
                     char temp = copia[j];
                     copia[j] = copia[k];
                     copia[k] = temp;
                 }
             }
         }
         
         for(int i = 0; i < m; i++){
             if(alfa[i] != copia[i]){
                 cont++;
             }
         }
         
         if(cont == 2){
             printf("There are the chance.\n");
         }else{
             printf("There aren't the chance.\n");
         }
     }
 
    return 0;
}