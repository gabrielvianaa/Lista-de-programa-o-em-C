#include <stdio.h>//biblioteca
#include <locale.h>//biblioteca

int main(){
	//Adiciona os caracters do portugu�s.
	setlocale(LC_ALL, "Portuguese");
    //J = juros; c = capital; i = taxa de juros; n = tempo; id = taxa de juros em decimal.
    float j, c, i, n, id;

	//Nomeando a fun��o do c�digo.
    printf("------------ Calculadora de juros simples ------------\n");

    //Inser��o dos dados referente ao capital.
    printf("Insira o capital desejado para aplicar:\n");
    scanf("%f", &c);

    //Inser��o dos dados referente a tava de juros em porcentagem.
    printf("Insira as taxas de juros em porcentagem:\n");
    scanf("%f", &i);

    //Inser��o dos dados referente ao tempo de aplica��o desejado.
    printf("Insira o tempo desejado para a aplica��o em anos:\n");
    scanf("%f", &n);
    
    //Convers�o de porcentagem para decimal;
    id = i/100;
    //F�rmula de Juros Simples.
    j = c * n * id;
    //Resultado final da conta.
    printf("A taxa de juros simples da sua aplica��o =%.2f", j);
}

