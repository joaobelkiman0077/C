#include <stdio.h>
#include <stdlib.h>

int main()
{
   int fatorial = 7;
   int resposta = 1;
   for( ; fatorial >= 1; --fatorial){
    resposta *= fatorial;

   }
   printf("O numero do fatorial e %d\n", resposta);
    return 0;
}
