#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int argc;
    char frase[20];
    int i=0;
    int chave;
    
    printf("Digite um Numero para criptografar:");
    scanf("%d",&chave);
    
    printf("\nDigite a frase para ser criptografda:");
    scanf("%s",frase);
    
    printf("\n\nFrase criptografada!\n");
    printf("Frase: ");
    
    for(i=0;i<strlen(frase);i++){
         
        if(frase[i]+chave > 'z'){  
            frase[i] = frase[i] - 26;
        } 
        
        if(frase[i]+chave < 'a'){   
            frase[i] = frase[i] + 26;
        } 
        
        int enc=(int)frase[i]+chave;
        printf("%c",(char)enc);
    }
    
    printf("\n\n");
    
    return 0;
}