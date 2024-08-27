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

bool verificarK(double K){// Funcao para verificar se o valor a introduzir(K) no array eh inteiro ou nao.
     if(K == (int)K){
        return true;
     }else{
         return false;
     }
}

bool verificarP(double P){//Funcao para verificar o indice (p), se eh inteiro e se esta dentro dos limites do array.
    if(P == (int)P && (P >= 0 && P < 10)){
        return true;
    }else{
        return false;
    }
}

int main(){
int Array[10] = {11, 15, 16, 8, 2};
double K, P;// P e K sao declarados como double para que seja possivel verificar se sao inteiros ou nao.
int i = 0, N = 5;

    printf("===INTRODUZIR ELEMENTOS NO ARRAY===\n\nArray[10] = {");
    for(i = 0; i < 10; i++){//Para melhor percepcao do usuario, eh exibido o array original,antes de qualquer formatacao  
        if(i == 9){
            printf("%d};\n",Array[i]);
        }else{
            printf("%d, ",Array[i]);
        }
    }
    printf("\nIntroduza o valor do elemento que quer introduzir e o seu respectivo indice.\n");
    do{// Esse loop garante que o usuario possa introduzir o valor(k), ate que seja valido
        printf("Valor: ");
        scanf("%lf",&K);
        if(verificarK(K) == false){
            printf("O valor nao eh inteiro, tente novamente.\n");
        }
    }while(verificarK(K) == false);

    do {//Esse loop garante que o usuario possa introduzir o indice(P), ate que seja valido
        printf("Indice (0-9): ");
        scanf("%lf", &P);
        if(verificarP(P) == false){
            printf("Indice invalido, tente novamente.\n");
        }
        }while(verificarP(P) == false);

    int valor = (int)K, indice = (int)P;/* Os valores K e P nao serao mais uteis como double,pois ja se tem a certeza
    que as suas casas decimais sao zeros(ou seja, matematicamente sao interios),entao sao convertidos para int,pois,
    presisamos desses valores como interos para interragir com loop for que se segue*/

    if(indice < 5){ 
        for(i = N; i > indice; i--){/*Afasta os valores do array para a direita para que seja possive introduzir o 
        valor no indice desejado pelo usuario, quando (indice < 5)*/
            Array[i] = Array[i-1];
        }
        Array[indice] = valor;
        N++;
    }else{
        Array[indice] = valor;//Introduz diretamente o valor pois quando(indice >= 5) o erray esta vazio.
    }

    mostrarArray(Array);

    return 0;
    }