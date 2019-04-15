#include <stdio.h>

int main()
{
    printf("---TRANGULOS---\n\n");
    printf("Triangulo 1\n");
    
    for(int i = 1; i <=10; i++){
        
        for(int n = 1; n<=i; n++){
            printf("*");
        }
        printf("\n");
    }
    
    printf("Triangulo 2\n");
    
    for(int i = 1; i <=10; i++){
        
        for(int n = 10; n>=i; n--){
            printf("*");
        }
        printf("\n");
    }
    
    printf("Triangulo 3\n");
    
    for(int i = 1; i <=10; i++){
        for(int e = 1; e<=i; e++){
            printf(" ");
        }
        for(int n = 9; n>=i; n--){
            printf("*");
        }
        printf("\n");
    }
    
    printf("Triangulo 4\n");
    
    for(int i = 1; i <=10; i++){
        for(int e = 10; e>=i; e--){
            printf(" ");
        }
        for(int n = 1; n<=i; n++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

