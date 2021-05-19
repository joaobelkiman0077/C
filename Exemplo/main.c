#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char nome[100];
  scanf("%[^\n]%*c", nome);

  int numero = 0;
  scanf("%d", &numero);

  printf("%s\n", nome);
  printf("%d", numero);
  return 0;
}



