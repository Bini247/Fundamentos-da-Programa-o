#include <stdio.h>

int main() {

    int n1, n2;
        
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("\nDigite o segundo numero: ");
    scanf("%d", &n2);

    if( n1 > n2 ){
        printf("\n%d e maior", n1);
    }

    if( n2 > n1 ){
        printf("\n%d e maior", n2);
    }

    if( n1 == n2 ){
        printf("\nOs numeros s%o iguais");
    }
}