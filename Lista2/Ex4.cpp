#include <stdio.h>

int main(){
    int n = 0, n2 = 0, ehprimo = 0;
    printf("---NUMEROS PRIMOS---\n\n");
    printf("Digite um Numero Inteiro:");
    scanf("%d", &n);
    printf("Digite outro Numero Inteiro Maior que o Anterior:");
    scanf("%d", &n2);
    
    if(n<n2){
        while(n<=n2){
            int primo = 0;
            for(int i = 1; i<=n; i++){
                int resultado = n%i;
                if(resultado == 0 ){
                    primo++;
                }
            }
            if(primo==2){
                ehprimo++;
            }
            n++;
        }
        printf("Quantidade de Numeros primos entre os dois Numeros: %d", ehprimo);
    }else{
        printf("O Primeiro Numero deve ser menor que o Segundo!");
    }
    return 0;
}
