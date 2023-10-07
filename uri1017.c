//Joaozinho quer calcular e mostrar a quantidade de litros de combustível gastos em uma viagem, ao utilizar um automóvel que faz 12 KM/L.
//Para isso, ele gostaria que você o auxiliasse através de um simples programa. Para efetuar o cálculo, deve-se fornecer o tempo gasto
//na viagem (em horas) e a velocidade média durante a mesma (em km/h). 
//Assim, pode-se obter distância percorrida e, em seguida, calcular quantos litros seriam necessários.
//Mostre o valor com 3 casas decimais após o ponto.

#include <stdio.h>

float gasoline(int time_in_hours, int speed){
    float km = time_in_hours * speed;
    float result = km/12;
    return result;
}

int main(){
    int time_in_hours, speed;

    scanf("%d", &time_in_hours);
    scanf("%d", &speed);

    float result = gasoline(time_in_hours, speed);
    printf("%.3f\n", result);

    return 0;
}