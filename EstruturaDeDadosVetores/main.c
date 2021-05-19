#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numerosDigitados[9];
    int i = 0;
    for (i = 0; i <= 8; i++){
    printf("Digite um numero: ");
    scanf("%d", &numerosDigitados[i]);
    }
    printf("Os numeros digitados foram: \n");
    for (i = 0; i<= 8; i++){
        printf("%d\n", numerosDigitados[i]);
    }
    return 0;
}
