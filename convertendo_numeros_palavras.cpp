#include <stdio.h>
#include <string.h>

int main() {
    char num_extenso[10][10] = {"zero", "um", "dois", "três", "quatro", "cinco", "seis", "sete", "oito", "nove"};
    char valor[10];
    int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     scanf("%s", valor);
     if(strcmp(valor, num_extenso[0]) == 0){
        printf("%d\n", num[0]);
     }else if(strcmp(valor, "0") == 0){
         printf("%s\n", num_extenso[0]);
     }
     
     if(strcmp(valor, num_extenso[1]) == 0){
        printf("%d\n", num[1]);
     }else if(strcmp(valor, "1") == 0){
         printf("%s\n", num_extenso[1]);
     }
     
     if(strcmp(valor, num_extenso[2]) == 0){
        printf("%d\n", num[2]);
     }else if(strcmp(valor, "2") == 0){
         printf("%s\n", num_extenso[2]);
     }
     
     if(strcmp(valor, num_extenso[3]) == 0){
        printf("%d\n", num[3]);
     }else if(strcmp(valor, "3") == 0){
         printf("%s\n", num_extenso[3]);
     }
     
     if(strcmp(valor, num_extenso[4]) == 0){
        printf("%d\n", num[4]);
     }else if(strcmp(valor, "4") == 0){
         printf("%s\n", num_extenso[4]);
     }
     
     if(strcmp(valor, num_extenso[5]) == 0){
        printf("%d\n", num[5]);
     }else if(strcmp(valor, "5") == 0){
         printf("%s\n", num_extenso[5]);
     }
     
     if(strcmp(valor, num_extenso[6]) == 0){
        printf("%d\n", num[6]);
     }else if(strcmp(valor, "6") == 0){
         printf("%s\n", num_extenso[6]);
     }
     
     if(strcmp(valor, num_extenso[7]) == 0){
        printf("%d\n", num[7]);
     }else if(strcmp(valor, "7") == 0){
         printf("%s\n", num_extenso[7]);
     }
     
     if(strcmp(valor, num_extenso[8]) == 0){
        printf("%d\n", num[8]);
     }else if(strcmp(valor, "8") == 0){
         printf("%s\n", num_extenso[8]);
     }
     
     if(strcmp(valor, num_extenso[9]) == 0){
        printf("%d\n", num[9]);
     }else if(strcmp(valor, "9") == 0){
         printf("%s\n", num_extenso[9]);
     }
     
     
    return 0;
}
