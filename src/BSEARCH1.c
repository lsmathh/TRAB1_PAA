//MATHEUS LOPES DE SOUZA - 190043831



#include "stdio.h"

int buscaBinaria( int *vetor,  int query, int tamanho){
    int inicio = 0;
    tamanho = tamanho - 1;

    int resposta = -1;

    while(inicio <= tamanho){
        int meio = (inicio + tamanho)/2;

        if(vetor[meio] == query){
            resposta = meio;
            tamanho = meio - 1; 
        }
        else if(vetor[meio] > query){
            tamanho = meio - 1;
        }
        else{
            inicio = meio + 1;
        }
    }

    return resposta;
};


int main(){
    int tamanhoVetor, qtdBuscas;

    scanf("%d %d", &tamanhoVetor, &qtdBuscas);
    int vetor[tamanhoVetor];
    int VET[qtdBuscas];


    for(int i=0; i<tamanhoVetor; i++){
         scanf("%d", &vetor[i]);
    }

    for(int i = 0; i<qtdBuscas; i++){
        int query;

        scanf("%d", &query);
        int resposta = buscaBinaria(vetor, query, tamanhoVetor);

        if(resposta == -1){
            VET[i] = resposta;
        }else{
            VET[i] = resposta;
        }
    }

    for(int j=0; j<qtdBuscas; j++){
        printf("%d\n", VET[j]);
    }

    return 0;
}