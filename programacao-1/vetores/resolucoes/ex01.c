#include <stdio.h>

void leVetor(int vet[], int tam){
    
    for(int i = 0; i < tam; i++){
        printf("Pos[%d]: ", i+1);
        scanf(" %d", &vet[i]);
    }
    
}

int ocorrencias(int vet[], int tam){
    
    int count = 0;
    
    for(int i = 0; i < tam; i++){
        if(vet[i] == vet[tam-1]){
            count++;
        }
    }
    return count;
}

int main() {
    
    int num = 0, resultado = 0;

    printf("Informe o tamanho do vetor: ");
    scanf(" %d", &num);
    int vetor[num];
    
    leVetor(vetor, num);
    resultado = ocorrencias(vetor, num);
    printf("A quantidade de ocorrencias do ultimo valor eh: %d", resultado);

    return 0;
}


