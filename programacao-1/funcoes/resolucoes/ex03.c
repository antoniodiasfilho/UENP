#include <stdio.h>

int multiplo(int a,int b){
    if(b == 0){
        printf("Nao pode dividir por zero\n");
        return 0;
    }
    
    return(a % b == 0);
}

int main()
{
    int x = 0, y = 0;

    printf("Informe o Numerador: ");
    scanf(" %d" , &x);
    printf("Informe o Denominador: ");
    scanf(" %d" , &y);
    printf("%d", multiplo(x,y));

    return 0;
}
