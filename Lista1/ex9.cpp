
#include <stdio.h>

int main() {
	
	int n1, n2, n3, primeiro, segundo, terceiro;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("\nDigite o segundo numero: ");
	scanf("%d", &n2);
	
	if( n2 == n1 ){
		printf("\n\nOs numeros devem ser diferentes!");
		return 0;
	}
	
	printf("\nDigite o terceiro numero: ");
	scanf("%d", &n3);
	
	if( n3 == n1 || n3 == n2 ){
		printf("\n\nOs numeros devem ser diferentes!");
		return 0;
	}
	
	if ( n1 > n2 ){
		primeiro = n1;
		segundo = n2;
	
	} else {
		primeiro = n2;
		segundo = n1;
	}
	
	if ( n3 > primeiro ){
		terceiro = segundo;
		segundo = primeiro;
		primeiro = n3;
	
	} else if (n3 > segundo){
		terceiro = segundo;
		segundo = n3;
	
	} else {
		terceiro = n3;
	}
	
	printf("\nA ordem decrescente dos numeros e: %d - %d - %d", primeiro, segundo, terceiro);
	
	return 0;
}