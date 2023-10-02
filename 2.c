#include <stdio.h>

int main() {
    float chico_altura = 1.50;
    float ze_altura = 1.10;
    int anos = 0;

    while (ze_altura <= chico_altura) {
        chico_altura += 0.02; 
        ze_altura += 0.03;            
        anos++;
    }

    printf("Serão necessários %d anos para que Zé seja maior que Chico.\n", anos);

    return 0;
}
