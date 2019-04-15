#include <stdio.h>
#include <cstdlib>
#include <ctime>

int main(){
    std::srand(std::time(0));
    int n = 0, r = 0;
    int al = 1 + (rand() % 100);
  
    printf("---JOGO DO QUENTE OU FRIO---\n\n");
    
    printf("Digite o Numero Entre 1 e 100:");
    scanf("%d", &n);
    
    for(int i = 1; i <= 10; i++){
        
        if(n-al<0){
          r = (n-al)*-1;
        }else{
          r = (n-al);
        }
        if(n == al){
            printf("ACERTOU!!!");
            return 0;
        }else if(r <= 4){
            printf("FERVENDO\n");
        }else if(r > 4 & r <= 9){
            printf("QUENTE\n");
        }else if(r > 9 & r <= 19){
            printf("MORNO\n");
        }else if(r > 19 & r <= 29){
            printf("FRIO\n");
        }else if(r >= 30){
            printf("GELADO\n");
        }
        if(i < 10){
            printf("Digite Outro Numero:");
            scanf("%d", &n);
        }
    }
    printf("NÃO FOI DESSA VEZ :(");
    return 0;
}