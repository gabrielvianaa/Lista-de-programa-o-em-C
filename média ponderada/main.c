#include <stdio.h>//biblioteca
#include <locale.h>//biblioteca

int main(){
	//Adiciona os caracteres do português.
	setlocale(LC_ALL,"Portuguese");
    //Definição das variáveis.
    float n1, n2, n3, med;
    int p1, p2, p3;

	//Nomeando a função do código.
    printf("-------------------- Média pondereada --------------------\n");

    //Inserir o valor da primeira nota no terminal
    printf("Digite a primeira nota:\n");
    scanf("%f", &n1);

    //Inserir o valor da segunda nota no terminal
    printf("Digite o peso referente a primeira nota:\n");
    scanf("%d", &p1);
    
    //Inserir o valor da terceira nota no terminal
    printf("Digite a segunda nota\n");
    scanf("%f", &n2);

    //Inserir o valor do peso 1 no terminal
    printf("Digite o peso referente a segunda nota:\n");
    scanf("%d", &p2);

    //Inserir o valor do peso 2 no terminal
    printf("Digite a terceira nota:\n");
    scanf("%f", &n3);

    //Inserir o valor do peso 3 no terminal
    printf("Digite o peso referente a terceira nota:\n");
    scanf("%d", &p3);

    //atribuindo a variável "med" a fórmula da média ponderada.
    med = (p1 * n1 + p2 * n2 + p3 * n3) / (p1 + p2 + p3);  
    //Valor final obtido.
    printf("A sua média ponderada é:%.2f", med);

}

