#include <stdio.h>//bibliotecas
#include <locale.h>//bibliotecas

int main(){
	setlocale(LC_ALL,"Portuguse");
	
    int n1;
    printf("Digite um n�mero:\n");
    scanf("%d", &n1);

    if(n1 >=1){
        printf("Seu n�mero � positivo");
    }
    else if(n1 < 0){
        printf("Seu n�mero � negativo");
    }
    else if(n1 == 0){
        printf("Seu n�mero � zero");
    }
return(0);
}
