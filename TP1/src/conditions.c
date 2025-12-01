#include <stdio.h>
#include <string.h>

int main() {

    int somme;
    for (int i = 1; i <= 1000; i++) {
      if (i % 5 == 0 || i % 7==0) {
        somme += i;
      }
      if (i % 11 == 0) {
        continue;
      }
      if (somme > 5000) {
        break;
      }
    }
      printf("La somme finale est de : %d", somme);

      return 0;
}
