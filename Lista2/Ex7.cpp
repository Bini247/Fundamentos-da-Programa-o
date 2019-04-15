#include <stdio.h>

int main()
{
    int n = 0, f = 1;
    printf("---FATORIAL---\n\n");
    printf("Digite um Numero Inteiro Positivo: ");
    scanf("%d", &n);
    
    if(n > 0){
        for(int i = 1; i <= n; i++){
            
            f = f*i;
        }
        
        printf("O fatorial de %d e: %d", n, f);
        
    }else{
        printf("Digite um Numero Valido!");
    }
    return 0;
}

