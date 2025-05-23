#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char time1[20];
    int golTime1;
    char time2[20];
    int golTime2;
}Palpite;

int main() {
    int num_participantes, num_partidas;
    Palpite *ptr;
    
     scanf("%d %d", &num_participantes, &num_partidas);
    
     while(num_participantes != 0 && num_partidas != 0){
     	Palpite resultados[num_partidas];
     	int pontuacao[num_participantes];
     	char nomes[num_participantes][20];
     	
     	ptr = (Palpite *) calloc(num_participantes * num_partidas, sizeof(Palpite));
     	
        for(int i = 0; i < num_participantes; i++){
            scanf("%s", nomes[i]);
            
            for(int j = 0; j < num_partidas; j++){
                int idx = i * num_partidas + j; 
                
                scanf("%s %d %s %d", ptr[idx].time1, &ptr[idx].golTime1, ptr[idx].time2, &ptr[idx].golTime2);
            }
        }
        
        for(int i = 0; i < num_partidas; i++){
            scanf("%s %d %s %d", resultados[i].time1, &resultados[i].golTime1, resultados[i].time2, &resultados[i].golTime2);
        }
        
        
        
        for(int i = 0; i < num_participantes; i++){
            int pontos = 0;
            for(int j = 0; j < num_partidas; j++){
                int idx = i * num_partidas + j; 
                
                if(ptr[idx].golTime1 == resultados[j].golTime1 && ptr[idx].golTime2 == resultados[j].golTime2){
                    pontos += 10;
                }else{
                    int resultado_real, resultado_palpite;
                    
                    if(ptr[idx].golTime1 > ptr[idx].golTime2){
                        resultado_palpite = 1;
                    }else if(ptr[idx].golTime2 > ptr[idx].golTime1){
                        resultado_palpite = -1;
                    }else{
                        resultado_palpite = 0;
                    }
                    
                    if(resultados[j].golTime1 > resultados[j].golTime2){            
                        resultado_real = 1;
                    }else if(resultados[j].golTime2  > resultados[j].golTime1){
                        resultado_real = -1;
                    }else{
                        resultado_real = 0;
                    }
                    
                    if(resultado_real == resultado_palpite && (ptr[idx].golTime1 == resultados[j].golTime1 || ptr[idx].golTime2 == resultados[j].golTime2)){
                        pontos += 7;
                    }else if(resultado_real == resultado_palpite){
                        pontos += 5;
                    }else if(ptr[idx].golTime1 == resultados[j].golTime1 || ptr[idx].golTime2 == resultados[j].golTime2){
                        pontos += 2;
                    }else{
                        continue;
                    }
                }
            }
            pontuacao[i] = pontos;
        }
        
        for(int i = 0; i < num_participantes; i++){
            printf("%s %d\n", nomes[i], pontuacao[i]);
        }
        
        scanf("%d %d", &num_participantes, &num_partidas);
        
        free(ptr);
     }

    return 0;
}
