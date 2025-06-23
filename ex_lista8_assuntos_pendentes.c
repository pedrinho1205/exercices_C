#include <stdio.h>
#include <string.h>
 
int main() {
    char s[100000];
    int pendente = 0;
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     scanf("%s", s);
     
     for(int i = 0; i < strlen(s); i++){
         if(s[i] == '('){
             pendente++;
         }else if(s[i] == ')'){
             if(pendente > 0){
                 pendente--;
             }else{
                continue;
             }
         }
     }
     
     if(pendente == 0){
         printf("Partiu RU!\n");
     }else{
         printf("Ainda temos %d assunto(s) pendente(s)!", pendente);
     }
 
    return 0;
}