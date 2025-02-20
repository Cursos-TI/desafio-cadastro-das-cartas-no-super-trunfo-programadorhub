#include <stdio.h>


int main() {
    
    char estado1[50], codigo1[10], nome_cidade1[50];
    char estado2[50], codigo2[10], nome_cidade2[50];
    int populacao1, populacao2;

    
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: ");
    scanf(" %s", &estado1);
    printf("Código da carta: ");
    scanf("%s", &codigo1);
    printf("Nome da cidade: ");
    scanf("%s", &nome_cidade1);
    printf("População: ");
    scanf("%d", &populacao1);


    printf("Digite os dados da Carta 2:\n");
    printf("Estado: ");
    scanf(" %s", estado2);
    printf("Código da carta: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %s", nome_cidade2);
    printf("População: ");
    scanf(" %d", &populacao2);


    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %d\n", nome_cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", nome_cidade2, estado2, populacao2);
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
    } else if (populacao1 < populacao2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }


    return 0;


}
