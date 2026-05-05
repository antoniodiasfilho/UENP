#include <stdio.h>

float custoTotal(float km, float consLitro, float prc){
    if(consLitro == 0){
        return -1;
    }
    return (km / consLitro) * prc;
}

int main()
{
    float distancia = 0, consumoLitro = 0, preco = 0, resultado = 0;
    
    printf("Informe a distancia percorrida em KM: ");
    scanf(" %f", &distancia);
    printf("Informe o consumo por Litro: ");
    scanf(" %f", &consumoLitro);
    printf("Informe o preco do combustivel: ");
    scanf(" %f", &preco);
    resultado = custoTotal(distancia, consumoLitro, preco);

    if(resultado < 0){
        printf("Nao pode dividir por zero");

    }else{
        printf("\nO custo total da viagem sera: %.2f",resultado);

    }

    return 0;
}
