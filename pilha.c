#include <stdio.h>
#include <stdlib.h>
 
typedef struct Node{
    int valor;
    struct Node *prox;
}Node;
 
Node *topo = NULL;
 
void push(int valor){
    Node *novo = (Node*) malloc(sizeof(Node));
    novo->valor = valor;
    novo->prox = topo;
    topo = novo;
}
 
void pop(){
    if(topo == NULL){
        printf("A pilha está vazia!\n");
    }else{
        Node *temp;
        temp = topo;
        topo = topo->prox;
        free(temp);
    }
}
 
void imprimirPilha(){
    Node *atual = topo;
    while(atual != NULL){
        printf("Valor: %d\n", atual->valor);
        atual = atual->prox;
    }
}
 
int main(){
    push(10);
    push(20);
    push(30);
    imprimirPilha();
 
    return 0;
}