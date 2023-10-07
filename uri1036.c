//Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. Se não for possível calcular as raízes,
//mostre a mensagem correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.

#include <stdio.h>
#include <math.h>

float bhaskara(float a, float b, float c){
    float delta = (b*b) - (4*a*c);
    float d = sqrt(delta);

    if (delta >= 0 && a > 0){
        float r1 = (-b + d)/(2*a);
        float r2 = (-b - d)/(2*a);

        printf("R1 = %.5f\n", r1);
        printf("R2 = %.5f\n", r2);
    } else {
        printf("Impossivel calcular\n");
    }
}

int main(){
    
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    bhaskara(a, b, c);

    return 0;
}