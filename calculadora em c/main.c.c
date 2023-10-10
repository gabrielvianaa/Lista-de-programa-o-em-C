#include <stdio.h>//biblioteca
#include <locale.h>//biblioteca

int main(){ 
	//Introduz os carácteres do português.
	setlocale(LC_ALL, "portuguese");
	
    //Atribuindo as variáveis.
    float num1, num2;

    //O usuário irá digitar o primeiro termo.
    printf("Digite o primeiro número:\n");
    scanf("%f", &num1);

    //O usuário irá digitar o segundo termo.
    printf("Digite o segundo número:\n");
    scanf("%f", &num2);

    //Será printado na tela as 4 operações realizadas com os dados digitados pelo usuário.
    printf("Multiplicação:%.2f\n", num1*num2);
    printf("Divisão:%.2f\n", num1/num2);
    printf("Soma:%.2f\n", num1 + num2);
    printf("Subtração:%.2f\n", num1 - num2);

}

