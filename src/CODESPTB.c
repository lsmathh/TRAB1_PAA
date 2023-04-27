#include "stdio.h"
int V[100000];
int VET[5];


//Algoritmo de insertion sort
int insertionSort(int *V, int N){
    int m = 0;
    int i, j, aux;

    for(i = 1; i < N; i++){
        aux = V[i];
        for(j = i - 1; (j >= 0) && (aux <  V[j]); j--){ 
            V[j + 1] = V[j];
            //Caso haja traoca de posição, incrementa a variável m 
            m++;
        }
        V[j + 1] = aux;
    }
    return m;
}



int main(){
    int T, N, j, i; 


    scanf("%d", &T);

    for(i = 0; i < T; i++){
        
        //Leitura do tamanho do vetor
        scanf("%d", &N);


        //Leitura de cada item do vetor
        for(int j=0; j<N; j++){
            scanf("%d", &V[j]);
        }

        //Adicionar a quantidade de troca de posições retornada pelo insertion em um vetor
        VET[i] = insertionSort(V, N);
    }

    for(i=0; i < T; i++)
        printf("%d\n", VET[i]);

    
    return 0;
    
}