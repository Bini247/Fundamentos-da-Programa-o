#include <stdio.h>
#include <stdlib.h>
int main() {

    float salario = 0, imposto = 0;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if(salario <= 190398) {
        imposto = 0;
    }else if(salario <= 282665) {
        imposto = salario * 0.075;
    }else if(salario <= 375105) {
        imposto = salario * 0.15;
    }else if(salario <= 466468) {
        imposto = salario * 0.225;
    }else{
        imposto = salario * 0.275;
    }

    printf("O imposto e de %.2f", imposto);
}
