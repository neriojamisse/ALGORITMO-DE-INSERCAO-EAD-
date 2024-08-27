```markdown
# Introdução

Este projeto contém dois exercícios em C que envolvem manipulação de arrays e validação de entradas do usuário. Ambos os exercícios têm como objetivo ensinar boas práticas de programação, como validação de dados, verificação de limites de arrays e cálculo de somas.

## Exercício 1: Inserção e Manipulação de Elementos em um Array

### Objetivo

Melhorar um algoritmo que insere valores em um array de 10 elementos. O valor `K` (valor a ser inserido) e o índice `P` (posição no array) são fornecidos pelo usuário, e o algoritmo garante que não haja violação do índice `P`. O programa também valida se `K` e `P` são números inteiros.

### Funcionalidades

- Validação de valores inseridos para `K` (valor) e `P` (índice).
- Inserção de valores no array em uma posição especificada, reorganizando os elementos se necessário.
- Exibição do conteúdo do array após a inserção.

### Estrutura do Código

1. **Funções principais**:
   - `mostrarArray`: Exibe os elementos do array.
   - `verificarK`: Verifica se o valor de `K` é um número inteiro.
   - `verificarP`: Verifica se o índice `P` é um número inteiro e está dentro dos limites permitidos (0-9).

2. **Fluxo do Programa**:
   - Exibe o array inicial.
   - Solicita ao usuário a inserção de `K` e `P`.
   - Valida as entradas.
   - Insere o valor `K` no índice `P`, deslocando elementos, se necessário.
   - Exibe o array atualizado.

### Exemplo de Execução

```bash
===INTRODUZIR ELEMENTOS NO ARRAY===

Array[10] = {11, 15, 16, 8, 2, 0, 0, 0, 0, 0};
Introduza o valor do elemento que quer introduzir e o seu respectivo indice.
Valor: 20
Indice (0-9): 2
O elemento de indice 0 = 11
O elemento de indice 1 = 15
O elemento de indice 2 = 20
O elemento de indice 3 = 16
O elemento de indice 4 = 8
O elemento de indice 5 = 2
O elemento de indice 6 = 0
O elemento de indice 7 = 0
O elemento de indice 8 = 0
O elemento de indice 9 = 0
```
<img src="./images/console1.png" alt="Console" width="300" height="300">

---

## Exercício 2: Registro de Salários de Funcionários

### Objetivo

Este exercício solicita ao usuário o registro de salários de até 10 funcionários. O número de funcionários a ser registrado é determinado pelo usuário, respeitando os limites do array. Após o registro, o programa exibe os salários cadastrados e calcula a soma total.

### Funcionalidades

- Registro de salários para até 10 funcionários.
- Validação do número de funcionários (deve ser um número inteiro entre 1 e 10).
- Exibição dos salários cadastrados e da soma total.

### Estrutura do Código

1. **Funções principais**:
   - `mostrarSalariors`: Exibe os salários registrados e calcula a soma total.
   - `verificarLimite`: Verifica se o número de funcionários é um número inteiro dentro do limite de 1 a 10.

2. **Fluxo do Programa**:
   - Solicita o número de funcionários a registrar.
   - Valida a entrada para garantir que está dentro dos limites (1-10).
   - Solicita os salários de cada funcionário.
   - Exibe os salários cadastrados e a soma total.

### Exemplo de Execução

```bash
===REGISTRO DE SALARIOS DE FUNCIONARIOS===

Digite o numero de funcionarios a registrar, dentro dos limites[1-10]: 3
Insira o salario do funcionario numero 1: 2500.50
Insira o salario do funcionario numero 2: 3200.75
Insira o salario do funcionario numero 3: 4100.00

O salario do funcionario 1 eh: 2500.50
O salario do funcionario 2 eh: 3200.75
O salario do funcionario 3 eh: 4100.00

A soma dos salarios eh: 9801.25
```
<img src="./images/console2.png" alt="Console" width="300" height="300">

---

## Conclusão

Ambos os exercícios focam em validação de entradas e manipulação de arrays. O primeiro exercício lida com a inserção de valores em um array e reorganização de elementos, enquanto o segundo foca no registro e cálculo de salários. Ambos são úteis para fortalecer habilidades em controle de fluxo e manipulação de estruturas de dados em C.
```

O programador: Nerio João Jamisse .