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
        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
            printf("Triângulo Retângulo\n");
        } else if (a * a > b * b + c * c || b * b > a * a + c * c || c * c > a * a + b * b) {
            printf("Triângulo Obtusângulo\n");
        } else {
            printf("Triângulo Acutângulo\n");
        }
    } else {
        printf("Não é um triângulo.\n");
    }

    return 0;
}
