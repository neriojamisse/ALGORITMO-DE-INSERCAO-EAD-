/*2 – Use o algoritmo discutido para inserir e visualizar os salários de x  funcionários
numa estrutura de dados de 10 espaços disponíveis.
Visualize igualmente a soma dos x salários cadastrados*/

#include <stdio.h>
#include <stdbool.h>

void mostrarSalariors(float salarios[],int limite){//funcao para exibir os salarios e mostrar a soma
    float soma = 0;
    for(int i = 0; i <= limite; i++){
        printf("O salario do funcionario %d eh: %.2f\n",i + 1, salarios[i]);
        soma += salarios[i];
    }
    printf("\nA soma dos salarios eh: %.2f",soma);
}

bool verificarLimite(double indice){
    if(indice == (int)indice && (indice > 0 && indice <= 10)){
        return true;
    }else{
        return false;
    }
    /* Essa funcao garante que o numero de funcionarios(indice), seja inteiro e esteja dentro dos limites,
    cujo o returno da funcao (true or false) sera usado no loop do-while para validar o indice.*/
}
int main(){

float salarios[10];
double indice;

    printf("===REGISTRO DE SALARIOS DE FUNCIONARIOS===\n");

    do{
        printf("\nDigite o numero de funcionarios a registrar, dentro dos limites[1-10]: ");
        scanf("%lf", &indice);
        if(verificarLimite(indice) == false){
            printf("\nO valor nao eh inteiro ou esta fora dos limites, tente novamente.");
            /*Essa estrutura de desicao (if), garante que a menssagem de erro so seja exibida
            somente se a funcao verificarLimite retornar false, ou seja, quando o valor nao for inteiro ou
            estiver fora dos limites(1-10).*/
        }
        /*E o do-while garante que o usuario possa tentar novamente ate que a funcao verivicarLimite retorne true,
        ou seja,quando o valor for inteiro e estiver dentro dos limites.(1-10)*/
    }while(verificarLimite(indice) == false);

    indice--;//E porque em programacao a contagem comeca do zero,decrementei a variavel indice 
    int limite = (int)indice;/*Para que uma variavel seja condicao de um loop for e necessario que ela seja inteira,
    pra tal coverti a varialver indice de double para inteiro e designando-a por limite*/

    for(int i = 0; i <= limite; i++){
        printf("Insira o salario do funcionario numero %d: ",i + 1);
        scanf("%f", &salarios[i]);
    }//Loop usado para receber e armazenar salarios no array (salarios[10]) 
    printf("\n");
    mostrarSalariors(salarios, limite);

   return 0;
}
