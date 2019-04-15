#include <stdio.h>

int main() {
	
	int n1, n2, soma, diferenca, produto, quociente, resto;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("\nDigite o segundo numero: ");
	scanf("%d", &n2);
	
	soma 		= n1 + n2;
    diferenca 	= n1 - n2;
	produto 	= n1 * n2;
	quociente 	= n1 / n2;
	resto 		= n1 % n2;
	
	printf("\nSoma: %d", soma);
	printf("\nDiferenca: %d", diferenca);
    printf("\nProduto: %d", produto);
	printf("\nQuociente: %d", quociente);
	printf("\nResto: %d", resto);
}