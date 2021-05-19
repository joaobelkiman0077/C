#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fatorial [20];
    printf("Digite o numero :");
    scanf("%d", &fatorial);
    for(int n = 0; n < fatorial ; n--){
    scanf("%d", &n);
    printf("%d x %d", fatorial, n, fatorial * n);

    }


    return 0;
}
