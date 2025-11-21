#include <stdio.h>
#include <string.h>

int main() {
    printf("Taille d'un char: %zu octets\n", sizeof(char));
    printf("Taille d'un signed char: %zu octets\n", sizeof(signed char));
    printf("Taille d'un unsigned char: %zu octets\n\n", sizeof(unsigned char));
   
    printf("Taille d'un short: %zu octets\n", sizeof(short));
    printf("Taille d'un signed short: %zu octets\n", sizeof(signed short));
    printf("Taille d'un unsigned short: %zu octets\n\n", sizeof(unsigned short));
   
    printf("Taille d'un int: %zu octets\n", sizeof(int));
    printf("Taille d'un signed int: %zu octets\n", sizeof(signed int));
    printf("Taille d'un unsigned int: %zu octets\n\n", sizeof(unsigned int));

    printf("Taille d'un long int: %zu octets\n", sizeof(long int));
    printf("Taille d'un signed long int: %zu octets\n", sizeof(signed long int));
    printf("Taille d'un unsigned long int: %zu octets\n\n", sizeof(unsigned long int));
    
    printf("Taille d'un long long int: %zu octets\n", sizeof(long long int));
    printf("Taille d'un signed long long int: %zu octets\n", sizeof(signed long long int));
    printf("Taille d'un unsigned long long int: %zu octets\n\n", sizeof(unsigned long long int));   

    printf("Taille d'un float: %zu octets\n", sizeof(float));
    printf("Taille d'un double: %zu octets\n", sizeof(double));
    printf("Taille d'un long double: %zu octets\n", sizeof(long double));

    return 0;
}
