#include <stdio.h>

int main() {
	
	int n1;
	
	printf("Digite o numero: ");
	scanf("%d", &n1);
	
	if( (n1 % 2) == 0 ){
		printf("\nO numero e par");
	}else{
		printf("\nO numero e impar");
	}
	
	return 0;
}