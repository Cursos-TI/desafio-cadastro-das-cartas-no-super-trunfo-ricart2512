#include <stdio.h>

#define ESTADOS 8
#define CIDADES_POR_ESTADO 4

// Estrutura para armazenar os dados de uma cidade
typedef struct {
    char codigo[4];
    int populacao;
    float area;
    double pib;
    int pontos_turisticos;
} Cidade;

int main() {
    Cidade cidades[ESTADOS * CIDADES_POR_ESTADO];
    char estados[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    int index = 0;

    printf("Cadastro das cidades:\n");
    
    for (int i = 0; i < ESTADOS; i++) {
        for (int j = 1; j <= CIDADES_POR_ESTADO; j++) {
            snprintf(cidades[index].codigo, sizeof(cidades[index].codigo), "%c%02d", estados[i], j);
            
            printf("\nCadastro da cidade %s:\n", cidades[index].codigo);
            printf("Populacao: ");
            scanf("%d", &cidades[index].populacao);
            printf("Area (km^2): ");
            scanf("%f", &cidades[index].area);
            printf("PIB (em bilhões): ");
            scanf("%lf", &cidades[index].pib);
            printf("Numero de pontos turísticos: ");
            scanf("%d", &cidades[index].pontos_turisticos);
            
            index++;
        }
    }

    // Exibindo os dados cadastrados
    printf("\nCidades cadastradas:\n");
    for (int i = 0; i < ESTADOS * CIDADES_POR_ESTADO; i++) {
        printf("\nCidade: %s\n", cidades[i].codigo);
        printf("Populacao: %d\n", cidades[i].populacao);
        printf("Area: %.2f km^2\n", cidades[i].area);
        printf("PIB: %.2lf bilhões\n", cidades[i].pib);
        printf("Pontos turísticos: %d\n", cidades[i].pontos_turisticos);
    }
    
    return 0;
}


