#include <stdio.h>//bibliotecas
#include <locale.h>//bibliotecas

int main(){
	setlocale(LC_ALL, "Portuguese");
    float n1, n2, n3, med;

    printf("Digite a primeira nota: \n");
    scanf("%f", &n1);

    printf("Digite a segunda nota:\n");
    scanf("%f", &n2);

    printf("Digite a terceira nota:\n");
    scanf("%f", &n3);

    med = (n1 + n2 + n3)/3;
    printf("Sua média final é: %.2f\n", med);
    
    if(med >= 7){
        printf("Aprovado(a)!");
    }
    else{
        printf("Reprovado(a)!");
    }

}
