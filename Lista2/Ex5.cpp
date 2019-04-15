#include <stdio.h>

int main()
{
    float idade = 0, soma = 0;
    printf("---MEDIA DE IDADES---\n\n");
    for(float i = 0; i<10; i++){
        printf("Digite uma idade:");
        scanf("%f", &idade);
        soma = soma + idade;
    }
    float media = soma/10;
    printf("A media das 10 Idades e: %.2f", media);
    return 0;
}

