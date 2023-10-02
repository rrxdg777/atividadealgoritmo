#include <stdio.h>

int main() {
    int num_alunos = 30;
    float notas[num_alunos][3];
    float media_geral = 0.0;


    for (int i = 0; i < num_alunos; i++) {
        printf("Digite as notas do aluno %d (n1 n2 n3): ", i + 1);
        scanf("%f %f %f", &notas[i][0], &notas[i][1], &notas[i][2]);

        float media_ponderada = (notas[i][0] * 2 + notas[i][1] * 4 + notas[i][2] * 3) / 10;
        media_geral += media_ponderada;

        printf("Média do aluno %d: %.2f ", i + 1, media_ponderada);

        if (media_ponderada >= 7.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    
    media_geral /= num_alunos;
    printf("Média geral da turma: %.2f\n", media_geral);

    return 0;
}
