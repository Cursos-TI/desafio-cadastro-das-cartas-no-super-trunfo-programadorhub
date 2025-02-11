#include <stdio.h>


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    printf ("Super Trunfo Paises \n");
    
    char codigo[6];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    char cidade[32];

    
    printf("Digite o código da cidade (ex: A01)\n");
    scanf("%s", &codigo);   
    
    printf("Digite a População \n");
    scanf("%d", &populacao);

    printf("Digite a aréa \n");
    scanf(" %f", &area);

    printf("Digite o PIB \n");
    scanf(" %f", &pib);

    printf("Digite os pontos turisticos \n");
    scanf("%f", &pontos_turisticos);

    printf("Digite a cidade \n");
    scanf("%f", &cidade);

    printf("\nResultado das cartas\n");
    printf("Código: %s\n", codigo);
    printf("Cidade: %d\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}
