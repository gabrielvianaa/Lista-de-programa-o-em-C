#include <stdio.h>//biblioteca
#include <locale.h>//biblioteca

int main(){ 
	//Introduz os car�cteres do portugu�s.
	setlocale(LC_ALL, "portuguese");
	
    //Atribuindo as vari�veis.
    float num1, num2;

    //O usu�rio ir� digitar o primeiro termo.
    printf("Digite o primeiro n�mero:\n");
    scanf("%f", &num1);

    //O usu�rio ir� digitar o segundo termo.
    printf("Digite o segundo n�mero:\n");
    scanf("%f", &num2);

    //Ser� printado na tela as 4 opera��es realizadas com os dados digitados pelo usu�rio.
    printf("Multiplica��o:%.2f\n", num1*num2);
    printf("Divis�o:%.2f\n", num1/num2);
    printf("Soma:%.2f\n", num1 + num2);
    printf("Subtra��o:%.2f\n", num1 - num2);

}

