#include <stdio.h>

int main()
{
    float altura = 0,menor = 0, maior = 0, soma = 0, media = 0;
    printf("---MEDIA DE ALTURAS---\n\n");
    for(int i = 0; i<15; i++){
        printf("Digite uma Altura:");
        scanf("%f", &altura);
        if(i == 0){
            maior = altura;
            menor = altura;
        }else{
            if(altura<menor){
                menor = altura;
            }
            if(altura>maior){
                maior = altura;
            }
        }
        soma = soma + altura;
    }
    media = soma/15;
    printf("\nA maior altura e: %.2f\n", maior);
    printf("A menor altura e: %.2f\n", menor);
    printf("A soma das alturas e: %.2f\n", soma);
    printf("A media das alturas e: %.2f\n", media);
    return 0;
}

