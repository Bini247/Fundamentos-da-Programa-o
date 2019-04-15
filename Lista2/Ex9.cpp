#include <stdio.h>

int main()
{
    int a = 0, f = 1;
    float p = 7.6, at = 0;
    printf("---CRESCIMENTO POPULACIONAL---\n\n");
    printf("Digite o Ano Atual: ");
    scanf("%d", &a);
    
    printf("%d - %.2f Bi  -\n", a, p);
    for(int i = 1; i <= 75; i++){
        
        at = (p*1.2)-p;
        p = p*1.2;
        a += 1; 
        printf("%d - %.2f Bi - %.2f Bi\n", a, p, at);
    }
        
    return 0;
}
