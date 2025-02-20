#include <stdio.h>

int main() {
   
    printf("Super Trunfo Países\n");

    char codigo[6];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    char cidade[32];

    printf("Digite o código da cidade (ex: A01)\n");
    scanf("%s", codigo);

    printf("Digite a População\n");
    scanf("%d", &populacao);

    printf("Digite a área\n");
    scanf("%f", &area);

    printf("Digite o PIB\n");
    scanf("%f", &pib);

    printf("Digite os pontos turísticos\n");
    scanf("%d", &pontos_turisticos);

    printf("Digite a cidade\n");
    scanf(" %s", cidade);

    printf("\nResultado das cartas\n");
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}