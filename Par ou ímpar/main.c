#include <stdio.h>//bibliotecas
#include <locale.h>//bibliotecas

int main(){
	setlocale(LC_ALL, "Portuguese");

    int n1, result;
    printf("Digite um número:\n");
    scanf("%d", &n1);

    result = n1 % 2;
    if(result  == 0){
        printf("Seu número é par");
    }
    else{
        printf("Seu número é ímpar");

   }
}

