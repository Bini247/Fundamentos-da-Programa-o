#include <stdio.h>

int main()
{
    int n = 0;
    printf("---CONTADOR---\n\n");
    printf("Digite um Numero:");
    scanf("%d", &n);

    for(int i = 0; i <= n; i++){
        
        printf("%d\n", i);
    }
    return 0;
}

