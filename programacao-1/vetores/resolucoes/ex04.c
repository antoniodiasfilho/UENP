#include <stdio.h>

void leVetor(int vet[]){
    
    for(int i = 0; i < 5; i++){
        printf("Pos[%d]: ", i+1);
        scanf(" %d", &vet[i]);
    }
}

void comparar(int vet1[], int vet2[]){

    for(int i = 0; i < 5; i++){

        for(int j = 0; j < 5; j++){

            if(vet1[i] == vet2[j]){
                printf("%d ", vet1[i]);
                break;
            }
        }
       
    }

}

int main()
{
    int vetor1[5] = {0};
    int vetor2[5] = {0};
    leVetor(vetor1);
    leVetor(vetor2);
    comparar(vetor1, vetor2);

    return 0;
}
