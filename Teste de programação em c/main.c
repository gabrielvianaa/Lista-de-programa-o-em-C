#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
	
		int esc;
		float peso, altura, imc, n1, n2, result, celsius, fahr, raio;
	
		printf("Escolha qual c�lculo deseja realizar:\nIMC (1)\nOpera��es b�sicas (2)\nOpera��es Geom�tricas (3)\nConversor de temperaturas Celsius - Fahrenheit (4)\n");
		scanf("%d", &esc);
		switch(esc){
			case 1: 
				printf("Digite seu peso em KG:\n");
				scanf("%f", &peso);
				printf("Digite sua altura em metros:\n");
				scanf("%f", &altura);
				
				
				printf("Seu IMC �: %.2f", imc = peso / (altura * altura));
				
			break;
			case 2:
				printf("Selecione a opera��o desejada:\nSoma (1)\nSubtra��o (2)\nMultiplica��o (3)\nDivis�o (4)\n");
				scanf("%d", &esc);
				switch(esc){
					case 1:
						printf("Digite os n�meros para a soma:\n");
						scanf("%f %f", &n1, &n2);
						result = n1 + n2;
						printf("O resultado da soma �: %.2f", result);
					break;
					case 2:
						printf("Digite os n�meros para a subtra��o:\n");
						scanf("%f %f", &n1, &n2);
						result = n1 - n2;
						printf("O resultado da subtra��o �: %.2f", result);
					break;
					case 3:
						printf("Digite os n�meros para a multiplica��o:\n");
						scanf("%f %f", &n1, &n2);
						result = n1 * n2;
						printf("O resultado da multiplica�a� �: %.2f", result);
					break;
					case 4:
						printf("Digite os n�meros para a divis�o �:\n");
						scanf("%f %f", &n1, &n2);
							if(n2 != 0){
							result = n1 / n2;
							printf("O resultado da divis�o �: %.2f\n", result);
						}else {
							printf("----ERRO----\n");
						}
						break;
				}
			case 3:
				printf("Digite o raio do c�rculo: \n");
				scanf("%f", &raio);
				
				result = 3.1415 * pow(raio, 2);
				printf("A �rea do c�rculo = %.2f", result);
			break;
			case 4:
				printf("Digite a temperatura em Celsius:\n");
				scanf("%f", &celsius);
				
				fahr = 1.8*celsius + 32;
				printf("A temperatura em Fahrenheint e: %.2f", fahr);
			break;
					
		}
		
		
		
		
		
		
}
