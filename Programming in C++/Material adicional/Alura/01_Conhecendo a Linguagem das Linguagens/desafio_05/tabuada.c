#include <stdio.h>

int main (int argc, char *argv[]) {
    int n;

    printf ("\nInforme o numero que deseja saber a tabuada \n");
    scanf ("   %d", &n);
    for (int i = 0; i<=10; i++) {
        int p = i * n;
        printf (" %d X %d = %d \n", n, i, p);
    }
    return 0;
}
/*
Resposta do professor

#include <stdio.h>

int main() {
  int numero;
  printf("Qual tabuada você quer?");
  scanf("%d", &numero);

  for(int i = 0; i <= 10; i++) {
    int multiplicacao = numero * i;
    printf("%d x %d = %d\n", numero, i, multiplicacao);
  }
}

*/