#include <stdio.h>//biblioteca
#include <locale.h>//biblioteca

int main(){
	//Adiciona os caracteres do portugu�s.
	setlocale(LC_ALL, "Portuguese");
    //Defini��o das vari�veis (dol = valor em d�lares; t_eur = taxa do euro; euro).
    double dol, t_eur, euro;
	
	//Nomeando a fun��o do c�digo.
    printf("------------ Conversor de moedas ------------\n");

    //Inser��o dos valores em d�lares.
    printf("insira o valor em d�lares:\n");
    scanf("%lf", &dol);

    //Inser��o da taxa de convers�o do euro. 
    printf("Insira a taxa de convers�o do Euro:\n");
    scanf("%lf", &t_eur);

    //F�rmula para a convers�o da moeda.
    euro = dol * t_eur;
    //Resultado da convers�o.
    printf("A convers�o � igual a:%.2lf", euro);
}

