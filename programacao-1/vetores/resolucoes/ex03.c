#include <stdio.h>

void leVetor(int vet[]){
    
    for(int i = 0; i < 5; i++){
        printf("Pos[%d]: ", i+1);
        scanf(" %d", &vet[i]);
    }
    
}

void mostrarVet(int vet[]){
    
    for(int i = 0; i < 5; i++){
        printf("%d ", vet[i]);
    }
    
}

void dobrarVetor(int vet1[], int vet2[]){
    
    for(int i = 0; i < 5; i++){
        vet2[i] = vet1[i] * 2; 
    }
    
}

int main() {
    
    int vetor[5];
    int vetorDobro[5];
    leVetor(vetor);
    dobrarVetor(vetor, vetorDobro);
    mostrarVet(vetor);
    printf("\n");
    mostrarVet(vetorDobro);
    
    return 0;
}