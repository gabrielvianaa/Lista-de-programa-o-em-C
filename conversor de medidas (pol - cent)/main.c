#include <stdio.h>//bibliotecas
#include <locale.h>//bibliotecas

int main(){//Caixa principal do código.
	//Adiciona os caracteres do português.
	setlocale(LC_ALL, "Portuguese");
    //Definição das variáveis.
    float  pol, result;
    
    //Nomeando a função do código.
    printf("-------------------- unidades de medidas --------------------\n");

    //Inserir os dados desejados para conversão.
    printf("Digite a medida em polegadas:\n");
    scanf("%f", &pol);

    //Fórmula para conversão.
    result = 2.54 * pol;

    //Resultado final.
    printf("O resultado da conversão é:%.2f centímetros\n ", result);

    

}

