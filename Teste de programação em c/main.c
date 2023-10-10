#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
	
		int esc;
		float peso, altura, imc, n1, n2, result, celsius, fahr, raio;
	
		printf("Escolha qual cálculo deseja realizar:\nIMC (1)\nOperações básicas (2)\nOperações Geométricas (3)\nConversor de temperaturas Celsius - Fahrenheit (4)\n");
		scanf("%d", &esc);
		switch(esc){
			case 1: 
				printf("Digite seu peso em KG:\n");
				scanf("%f", &peso);
				printf("Digite sua altura em metros:\n");
				scanf("%f", &altura);
				
				
				printf("Seu IMC é: %.2f", imc = peso / (altura * altura));
				
			break;
			case 2:
				printf("Selecione a operação desejada:\nSoma (1)\nSubtração (2)\nMultiplicação (3)\nDivisão (4)\n");
				scanf("%d", &esc);
				switch(esc){
					case 1:
						printf("Digite os números para a soma:\n");
						scanf("%f %f", &n1, &n2);
						result = n1 + n2;
						printf("O resultado da soma é: %.2f", result);
					break;
					case 2:
						printf("Digite os números para a subtração:\n");
						scanf("%f %f", &n1, &n2);
						result = n1 - n2;
						printf("O resultado da subtração é: %.2f", result);
					break;
					case 3:
						printf("Digite os números para a multiplicação:\n");
						scanf("%f %f", &n1, &n2);
						result = n1 * n2;
						printf("O resultado da multiplicaçaõ é: %.2f", result);
					break;
					case 4:
						printf("Digite os números para a divisão é:\n");
						scanf("%f %f", &n1, &n2);
							if(n2 != 0){
							result = n1 / n2;
							printf("O resultado da divisão é: %.2f\n", result);
						}else {
							printf("----ERRO----\n");
						}
						break;
				}
			case 3:
				printf("Digite o raio do círculo: \n");
				scanf("%f", &raio);
				
				result = 3.1415 * pow(raio, 2);
				printf("A área do círculo = %.2f", result);
			break;
			case 4:
				printf("Digite a temperatura em Celsius:\n");
				scanf("%f", &celsius);
				
				fahr = 1.8*celsius + 32;
				printf("A temperatura em Fahrenheint e: %.2f", fahr);
			break;
					
		}
		
		
		
		
		
		
}
