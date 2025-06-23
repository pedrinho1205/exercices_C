#include <stdio.h>
#include <string.h>
 
int main() {
    int n;
    char diamantes[1001];
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     scanf("%d", &n);
     
     for(int i = 0; i < n; i++){
         scanf("%s", diamantes);
         int pendente = 0;
         int quantDiamantes = 0;
         
         for(int j = 0; j < strlen(diamantes); j++){
             if(diamantes[j] == '<'){
                 pendente++;
             }else if(diamantes[j] == '>'){
                 if(pendente > 0){
                     quantDiamantes++;
                     pendente--;
                 }else{
                     continue;
                 }
             }
         }
         
         printf("%d\n", quantDiamantes);
     }
 
    return 0;
}