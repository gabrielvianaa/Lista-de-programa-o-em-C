#include <stdio.h>//bibliotecas
#include <locale.h>//bibliotecas

int main(){//Caixa principal do c�digo.
	//Adiciona os caracteres do portugu�s.
	setlocale(LC_ALL, "Portuguese");
    //Defini��o das vari�veis.
    float  pol, result;
    
    //Nomeando a fun��o do c�digo.
    printf("-------------------- unidades de medidas --------------------\n");

    //Inserir os dados desejados para convers�o.
    printf("Digite a medida em polegadas:\n");
    scanf("%f", &pol);

    //F�rmula para convers�o.
    result = 2.54 * pol;

    //Resultado final.
    printf("O resultado da convers�o �:%.2f cent�metros\n ", result);

    

}

