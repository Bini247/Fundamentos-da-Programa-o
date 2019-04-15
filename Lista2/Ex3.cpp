#include <stdio.h>

int main()
{
    int n = 0;
    printf("---TABUADA---\n\n");
    printf("Digite um Numero:");
    scanf("%d", &n);

    for(int i = 0; i <= 9; i++){
        
        printf("%d x %d: %d\n",i, n, i*n);
    }
    return 0;
}

