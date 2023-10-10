#include <stdio.h>//biblioteca
#include <locale.h>//biblioteca

int main(){
	//Adiciona os caracters do português.
	setlocale(LC_ALL, "Portuguese");
    //J = juros; c = capital; i = taxa de juros; n = tempo; id = taxa de juros em decimal.
    float j, c, i, n, id;

	//Nomeando a função do código.
    printf("------------ Calculadora de juros simples ------------\n");

    //Inserção dos dados referente ao capital.
    printf("Insira o capital desejado para aplicar:\n");
    scanf("%f", &c);

    //Inserção dos dados referente a tava de juros em porcentagem.
    printf("Insira as taxas de juros em porcentagem:\n");
    scanf("%f", &i);

    //Inserção dos dados referente ao tempo de aplicação desejado.
    printf("Insira o tempo desejado para a aplicação em anos:\n");
    scanf("%f", &n);
    
    //Conversão de porcentagem para decimal;
    id = i/100;
    //Fórmula de Juros Simples.
    j = c * n * id;
    //Resultado final da conta.
    printf("A taxa de juros simples da sua aplicação =%.2f", j);
}

