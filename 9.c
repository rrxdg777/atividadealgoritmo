#include <stdio.h>

int main() {
    int codigo_voto;
    int votos_candidato[4] = {0}; // Inicializa o array com zeros
    int votos_nulos = 0;
    int votos_em_branco = 0;

    do {
        printf("Digite o código do voto (0 para encerrar): ");
        scanf("%d", &codigo_voto);

        switch (codigo_voto) {
            case 1:
            case 2:
            case 3:
            case 4:
                votos_candidato[codigo_voto - 1]++; // Incrementa o contador do candidato correspondente
                break;
            case 5:
                votos_nulos++;
                break;
            case 6:
                votos_em_branco++;
                break;
            case 0:
                break; // Finaliza o loop
            default:
                printf("Código de voto inválido.\n");
        }
    } while (codigo_voto != 0);

    printf("Total de votos para cada candidato:\n");
    for (int i = 0; i < 4; i++) {
        printf("Candidato %d: %d votos\n", i + 1, votos_candidato[i]);
    }

    printf("Total de votos nulos: %d\n", votos_nulos);
    printf("Total de votos em branco: %d\n", votos_em_branco);

    return 0;
}
