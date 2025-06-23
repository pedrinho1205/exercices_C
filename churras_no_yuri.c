#include <stdio.h>
#include <stdlib.h>
typedef struct Carne{
    char nome[21];
    int validade;
}Carne;
 
int main() {
    int n;
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     while(scanf("%d", &n) != EOF){
         Carne *ptr = (Carne*) malloc(n * sizeof(Carne));
         Carne temp;
         for(int i = 0; i < n; i++){
             scanf("%s %d", ptr[i].nome, &ptr[i].validade);
         }
         for(int i = 0; i < n - 1; i++){
             for(int j = i + 1; j < n; j++){
                 if(ptr[i].validade > ptr[j].validade){
                     temp = ptr[i];
                     ptr[i] = ptr[j];
                     ptr[j] = temp;
                 }
             }
         }
         for(int i = 0; i < n; i++){
            if (i == n - 1)
                printf("%s", ptr[i].nome);
            else
                printf("%s ", ptr[i].nome);
         }
         
         printf("\n");
     }
    return 0;
}