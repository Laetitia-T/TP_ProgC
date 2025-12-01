#include <stdio.h>
#include <string.h>

int main() {
    int compteur = 5;  

    if (compteur > 10) {
        return 1;
    }

    for (int i = 1; i <= compteur; i++) {

        for (int j = 1; j <= i; j++) {

            if (i == 1 || i == compteur) {
                printf("* ");   
            } else if (j == 1 || j == i) {
                printf("* ");   
            } else {
                printf("# ");
            }
        }

        printf("\n");
    }

    return 0;
}

////

#include <stdio.h>

int main(void) {
    int compteur = 5;
    
    if (compteur >= 10) {
        return 1;
    }

    int i = 1, j = 1;
    while (i <= compteur) {
        if (j > i) {
            printf("\n");
            i++;
            j = 1;
        } else {
            if (i == 1 || i == compteur) {
                printf("*");
            } else if (j == 1 || j == i) {
                printf("*");
            } else {
                printf("#");
            }
            if (j < i) printf(" ");
            j++;
        }
    }

    return 0;
}
