#include "stdio.h"

int vetorA[10000];
int vetorB[10000];
int tamanhoVetor;


void merge(int inicio, int meio, int fim);



void mergesort(int inicio, int fim){
    int meio;

        if(inicio >= fim) return;
        meio = (fim + inicio)/2;

        mergesort(inicio, meio);
        mergesort(meio+1, fim);
        merge(inicio, meio, fim);

            
};




void merge(int inicio, int meio, int fim ){ 
        int i = inicio;
        int j = meio+1; 
        int k = 0;
        int total = fim - inicio + 1;
        
        while(k < total)
    {
        if(i > meio)
        {
            vetorB[k++] = vetorA[j++];
        }
        else if(j > fim)
        {
            vetorB[k++] = vetorA[i++];
        }
        else
        {
            if(vetorA[i] <= vetorA[j])
                vetorB[k++] = vetorA[i++];
            else vetorB[k++] = vetorA[j++];
        }
    }
    for(k = 0; k < total; ++k)
    {
       vetorA[inicio+k] = vetorB[k];
    }
}






int main()
{
    tamanhoVetor = 0;
    int x;
    
    while(scanf("%d", &x) != EOF)
    {
        vetorA[tamanhoVetor++] = x;
    }
    
    mergesort(0, tamanhoVetor-1);
    
    for(x = 0; x < tamanhoVetor; ++x)
        printf("%d ", vetorA[x]);
    printf("\n");
    
    return 0;
}