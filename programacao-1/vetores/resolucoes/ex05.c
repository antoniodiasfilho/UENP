#include <stdio.h>

void leVetor(int vet[], int tam){
    
    for(int i = 0; i < tam; i++){
        printf("Pos[%d]: ", i+1);
        scanf(" %d", &vet[i]);
    }
}

int maiorValor(int vet[], int tam){

    int maiorNumero = vet[0];
    for(int i = 1; i < tam; i++){
       
        if(vet[i] > maiorNumero){
            maiorNumero = vet[i];
        }

    }
    
    return maiorNumero;
}

int main()
{
    int num = 0, maior = 0;
    printf("Informe o tamanho do vetor: ");
    scanf(" %d", &num);
    int vetor[num];
    leVetor(vetor, num);
    
    maior = maiorValor(vetor, num);

    printf("O maior numero infomado no vetor foi: %d", maior);
    
    return 0;
}
