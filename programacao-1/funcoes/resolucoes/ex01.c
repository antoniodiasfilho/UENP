#include <stdio.h>

int somaNumeros(int numero){
    int soma = 0;
    for (int i = 1; i <= numero; i++){
        soma += i;
    }

    return soma;  
}

int main()
{
    int x = 0;

    printf("Informe um numero: ");
    scanf(" %d", &x);
    printf("A soma de todos os numeros de 1 ate %d eh igual a: %d", x, somaNumeros(x));
    
    return 0;
}
