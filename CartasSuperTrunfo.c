#include <stdio.h>


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    printf ("Super Trunfo Paises \n");
    
    char codigo[6];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    int cidade[32];

    
    printf("Digite o código da cidade (ex: A01): \n");
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

    







    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
