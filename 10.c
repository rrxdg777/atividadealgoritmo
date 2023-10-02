#include <stdio.h>
#include <string.h>

int main() {
    int num_cidades = 200;
    int codigo_cidade[num_cidades];
    char estado[num_cidades][3];
    int num_veiculos[num_cidades];
    int num_acidentes[num_cidades];

    // Leitura dos dados para cada cidade
    for (int i = 0; i < num_cidades; i++) {
        printf("Digite o código da cidade: ");
        scanf("%d", &codigo_cidade[i]);

        printf("Digite o estado da cidade (sigla): ");
        scanf("%s", estado[i]);

        printf("Digite o número de veículos de passeio em 1992: ");
        scanf("%d", &num_veiculos[i]);

        printf("Digite o número de acidentes de trânsito com vítimas em 1992: ");
        scanf("%d", &num_acidentes[i]);
    }

    // Inicialização das variáveis para cálculo das estatísticas
    int maior_indice = -1;
    int menor_indice = -1;
    float soma_veiculos = 0.0;
    float soma_acidentes_rs = 0.0;
    int num_cidades_rs = 0;

    // Cálculo das estatísticas
    for (int i = 0; i < num_cidades; i++) {
        float indice_acidentes = (float)num_acidentes[i] / num_veiculos[i];

        if (maior_indice == -1 || indice_acidentes > (float)num_acidentes[maior_indice] / num_veiculos[maior_indice]) {
            maior_indice = i;
        }

        if (menor_indice == -1 || indice_acidentes < (float)num_acidentes[menor_indice] / num_veiculos[menor_indice]) {
            menor_indice = i;
        }

        soma_veiculos += num_veiculos[i];

        if (strcmp(estado[i], "RS") == 0) {
            soma_acidentes_rs += num_acidentes[i];
            num_cidades_rs++;
        }
    }

    float media_veiculos = soma_veiculos / num_cidades;
    float media_acidentes_rs = soma_acidentes_rs / num_cidades_rs;

    // Exibição das estatísticas
    printf("a) Maior índice de acidentes pertence à cidade de código %d (%s)\n", codigo_cidade[maior_indice], estado[maior_indice]);
    printf("   Menor índice de acidentes pertence à cidade de código %d (%s)\n", codigo_cidade[menor_indice], estado[menor_indice]);
    printf("b) Média de veículos nas cidades brasileiras: %.2f\n", media_veiculos);
    printf("c) Média de acidentes com vítimas entre as cidades do Rio Grande do Sul: %.2f\n", media_acidentes_rs);

    return 0;
}
