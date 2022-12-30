#include <stdio.h>

int main (int argc, char *argv[]) {
    int n = 100;
    int r = ((n * (n + 1)) / 2);
    printf("A somo do numero 1 a 100 e igual a %d ", r);
    return 0;
}

/*
Soma de Gauss
a soma de Gauss utiliza o primeiro número e soma mais o ultimo número da sequencia que você deseja, sempre chegando ao mesmo resultado, então multiplica-se pelo utimo numero da seguencia n que vai dar o dobro da quantidade de vezes que precisa e divid-se por 2 para obter o resultado.
neste caso n representa o ultimo número
r representa a resposta 
*/

/* Resposta professor 

#include <stdio.h>

int main() {
  int soma = 0;
  for(int i = 1; i <= 100; i++) {
    soma = soma + i;
  }

  printf("A soma eh %d", soma);
}

*/