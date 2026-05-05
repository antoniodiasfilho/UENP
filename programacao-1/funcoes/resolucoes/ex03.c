#include <stdio.h>

int multiplo(int a,int b){
    if(b == 0){
        return -1;
    }
    
    return(a % b == 0);
}

int main()
{
    int x = 0, y = 0, resultado = 0;

    printf("Informe o Numerador: ");
    scanf(" %d" , &x);
    printf("Informe o Denominador: ");
    scanf(" %d" , &y);
    resultado = multiplo(x,y);

    if(resultado < 0){
        printf("Nao pode dividir por zero");

    }else{
        printf("%d", resultado);

    }

    return 0;
}
