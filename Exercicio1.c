/*1 – Melhore o algoritmo e o programa apresentado de modo que:
O valor de K e P sejam introduzidos pelo teclado, e que não haja violação do índice P (dentro dos limites do array).
Adicione outras melhorias ao algoritmo por forma a torna-lo perfeito (vide o link acima).
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void mostrarArray(int Array[]){
    for(int i = 0; i < 10; i++){
        printf("O elemento de indice %d = %d\n", i, Array[i]);
    }
}

bool verificarK(double K){
     if(K == (int)K){
        return true;
     }else{
         return false;
     }
}

bool verificarP(double P){
    if(P == (int)P && (P >= 0 && P < 10)){
        return true;
    }else{
        return false;
    }
}

int main(){
int Array[10] = {11, 15, 16, 8, 2};
double K, P;
int i = 0, N = 5;

    printf("===INTRODUZIR ELEMENTOS NO ARRAY===\n\nArray[10] = {");
    for(i = 0; i < 10; i++){
        if(i == 9){
            printf("%d};\n",Array[i]);
        }else{
            printf("%d, ",Array[i]);
        }
    }
    printf("\nIntroduza o valor do elemento que quer introduzir e o seu respectivo indice.\n");
    do{
        printf("Valor: ");
        scanf("%lf",&K);
        if(verificarK(K) == false){
            printf("O valor nao eh inteiro, tente novamente.\n");
        }
    }while(verificarK(K) == false);

    do {
        printf("Indice (0-9): ");
        scanf("%lf", &P);
        if(verificarP(P) == false){
            printf("Indice invalido, tente novamente.\n");
        }
        }while(verificarP(P) == false);

    int valor = (int)K, indice = (int)P;

    if(indice < 5){
        for(i = N; i > indice; i--){
            Array[i] = Array[i-1];
        }
        Array[indice] = valor;
        N++;
    }else{
        Array[indice] = valor;
    }

    mostrarArray(Array);

    return 0;
    }