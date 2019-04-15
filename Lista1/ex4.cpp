#include <stdio.h>

int main() {
	
	float n1, n2, n3, n4, media;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	
	printf("\nDigite o segundo numero: ");
	scanf("%f", &n2);
	
	if( n2 == n1 ){
		printf("\n\nOs numeros devem ser diferentes!");
		return 0;
	}
	
	printf("\nDigite o terceiro numero: ");
	scanf("%f", &n3);
	
	if( n3 == n1 || n3 == n2 ){
		printf("\n\nOs numeros devem ser diferentes!");
		return 0;
	}
	
	printf("\nDigite o quarto numero: ");
	scanf("%f", &n4);
	
	if( n4 == n1 || n4 == n2  || n4 == n3){
		printf("\n\nOs numeros devem ser diferentes!");
		return 0;
	}
	
	media = (n1 + n2 + n3 + n4) / 4;
	
	printf("\n\nMedia: %f", media);
	
	return 0;
}