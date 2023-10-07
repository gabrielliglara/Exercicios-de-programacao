//Escreva um programa para ler as notas da primeira e a segunda avaliação de um aluno.
//Calcule e imprima a média semestral. O programa só deverá aceitar notas válidas (uma nota válida deve pertencer ao intervalo [0,10]).
//Cada nota deve ser validada separadamente.
//No final deve ser impressa a mensagem “novo calculo (1-sim 2-nao)”, solicitando ao usuário que informe um código (1 ou 2) indicando
//se ele deseja ou não executar o algoritmo novamente, (aceitar apenas os código 1 ou 2). Se for informado o código 1 deve ser repetida
//a execução de todo o programa para permitir um novo cálculo, caso contrário o programa deve ser encerrado.

#include <stdio.h>

int calcula_media(float a, float b){
    float media = (a * b)/2;
}

int main(){
    float nota = 0, valor = 0;
    int i = 0;

    while (i !=2){

            scanf("%f", &valor);
            if (valor >= 0 && valor <= 10){
                nota += valor;
                cont++;
            } else {
                printf("nota invalida\n");
            }  
            scanf("%f", &valor);
            if (valor >= 0 && valor <= 10){
                prova2 = valor;
            } else {
                printf("nota invalida\n");
            }
        
            if (prova1 >= 0 && prova1 <= 10 && prova2 >= 0 && prova2 <= 10){
                float media = calcula_media(prova1, prova2);
                printf("media = %.2f\n", media);
                printf("novo calculo 1-sim 2-nao\n");
                scanf("%d", &i);
        }
        }
    }
}