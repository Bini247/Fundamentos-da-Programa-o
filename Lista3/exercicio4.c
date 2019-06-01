#include <stdio.h>
#include <string.h>

int main() {
    char palavra[11];
    char contrario[11];
    int total=0,i,j,erro=0;
    
    printf("Digite uma palavra com 10 letras no maximo: ");
    scanf("%s",palavra);
    
    total = strlen(palavra);
    j = total;
    total++;
    j--;
    
    for(i=0; i < total; i++){
        
       contrario[i] = palavra[j];
       j--;
    }
    
    total--;
    
    for(i=0; i < total; i++) {
        
       if(palavra[i] != contrario[i]){ 
           
           erro = 1; 
       }
    }
    
    if(erro == 1){
        
       printf("\nA palavra nao e palindromo."); 
    }else{ 
        
       printf("\nA palavra e palindromo.");
    }
}
