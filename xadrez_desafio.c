#include <stdio.h>

int main() {

    
    for (int torre = 0; torre < 5; torre++) {
        printf("TorreFrente!\n");
    }
    
        printf("Quebra de linha\n");
    
        int casasbispo = 5;
        int bispo = 0;

    while (bispo < casasbispo) {
        printf("Diagonal!\n");
        bispo++;
    }
       printf("Quebra de linha\n");

        int casasrainha = 8;
        int rainha = 0;
    
        do {
        printf("Esquerda!\n");
        rainha++;
    }   while (rainha < casasrainha);

    return 0;
}