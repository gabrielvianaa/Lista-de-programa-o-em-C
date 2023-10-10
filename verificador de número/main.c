#include <stdio.h>//bibliotecas
#include <locale.h>//bibliotecas

int main(){
	setlocale(LC_ALL,"Portuguse");
	
    int n1;
    printf("Digite um número:\n");
    scanf("%d", &n1);

    if(n1 >=1){
        printf("Seu número é positivo");
    }
    else if(n1 < 0){
        printf("Seu número é negativo");
    }
    else if(n1 == 0){
        printf("Seu número é zero");
    }
return(0);
}
