#include <stdio.h>//bibliotecas
#include <locale.h>//bibliotecas

int main(){
	setlocale(LC_ALL, "Portuguese");

    int n1, result;
    printf("Digite um n�mero:\n");
    scanf("%d", &n1);

    result = n1 % 2;
    if(result  == 0){
        printf("Seu n�mero � par");
    }
    else{
        printf("Seu n�mero � �mpar");

   }
}

