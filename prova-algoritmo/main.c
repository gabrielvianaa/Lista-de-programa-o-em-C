#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int n1, par = 0, impar = 0, i;
    float med, result;

    for(i; i<6; i++){
        printf("Digite um número\n");
        scanf("%d", &n1);
        med += n1;
        if(n1%2 == 0){
            par += n1;

        }else if(n1%2 != 0){
            impar += n1;
        }
    }
    result = med/6;
    printf("A média dos termos colocados é: %.2f\n", result);
    printf("A soma dos termos pares = %d\n", par);
    printf("A soma dos termos ímpares = %d\n", impar);
}


