#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite o valor do lado A: ");
    scanf("%f", &a);
    printf("Digite o valor do lado B: ");
    scanf("%f", &b);
    printf("Digite o valor do lado C: ");
    scanf("%f", &c);

    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) {
            printf("Triângulo Equilátero\n");
        } else if (a == b || b == c || a == c) {
            printf("Triângulo Isósceles\n");
        } else {
            printf("Triângulo Escaleno\n");
        }
    } else {
        printf("Não é um triângulo.\n");
    }

    return 0;
}
