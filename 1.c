#include <stdio.h>

int main() {
    float x;
    printf("Digite o valor de x: ");
    scanf("%f", &x);

    float fx = x * x + 3 * x + 2;

    printf("f(x) = %.2f\n", fx);

    return 0;
}
