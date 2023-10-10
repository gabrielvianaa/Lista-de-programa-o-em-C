#include <stdio.h>//biblioteca
#include <locale.h>//biblioteca

int main(){
	//Adiciona os caracteres do português.
	setlocale(LC_ALL, "Portuguese");
    //Definição das variáveis (dol = valor em dólares; t_eur = taxa do euro; euro).
    double dol, t_eur, euro;
	
	//Nomeando a função do código.
    printf("------------ Conversor de moedas ------------\n");

    //Inserção dos valores em dólares.
    printf("insira o valor em dólares:\n");
    scanf("%lf", &dol);

    //Inserção da taxa de conversão do euro. 
    printf("Insira a taxa de conversão do Euro:\n");
    scanf("%lf", &t_eur);

    //Fórmula para a conversão da moeda.
    euro = dol * t_eur;
    //Resultado da conversão.
    printf("A conversão é igual a:%.2lf", euro);
}

