#include <stdio.h>

unsigned long long int fib(unsigned int num){
    if(num == 0){
        return 0;
    }else if(num == 1){
        return 1;
    }else{
        return fib(num - 1) + fib(num - 2);
    }
}

int main() {
    unsigned long long int fibon;
    int quant;
    unsigned int num;
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     scanf("%d", &quant);
     
     for(int i = 0; i < quant; i++){
         scanf("%u", &num);
         fibon = fib(num);
         printf("Fib(%u) = %llu\n", num, fibon);
     }
 
    return 0;
}
