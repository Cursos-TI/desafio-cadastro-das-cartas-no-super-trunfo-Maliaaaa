#include <stdio.h>
int main()
{

    int Populacao, Populacao2, Pontos_turisticos, Pontos_turisticos2;
    float Area, PIB, Area2, PIB2;
    char Estado, Codigo[20], Cidade[20], Estado2, Codigo2[20], Cidade2[20];

    printf("Digite o Estado:");
    scanf(" %c", &Estado);

    printf("Digite o Codigo: ");
    scanf("%s", &Codigo);

    printf("Digite a Cidade: ");
    scanf(" %[^\n]", &Cidade);

    printf("Digite a Populacao: ");
    scanf("%d", &Populacao);

    printf("Digite a Area: ");
    scanf("%f", &Area);

    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("Digite os Pontos turisticos: ");
    scanf("%d", &Pontos_turisticos);

    // Carta 2
    printf("Digite os dados da carta 2: \n");

    printf("Digite o Estado:");
    scanf(" %c", &Estado2);

    printf("Digite o Codigo: ");
    scanf("%s", &Codigo2);

    printf("Digite a Cidade: ");
    scanf(" %[^\n]", &Cidade2);

    printf("Digite a Populacao: ");
    scanf("%d", &Populacao2);

    printf("Digite a Area: ");
    scanf("%f", &Area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite os Pontos turisticos: ");
    scanf("%d", &Pontos_turisticos2);

    printf("Carta 1: \n");
    printf("Estado: %c \n", Estado);
    printf("Código: %s \n", Codigo);
    printf("Nome da Cidade: %s \n", Cidade);
    printf("População: %d \n", Populacao);
    printf("Área: %f \n", Area);
    printf("PIB: %f \n", PIB);
    printf("Número de pontos turísticos: %d \n", Pontos_turisticos);

    printf("========================: \n");

    printf("Carta 2: \n");
    printf("Estado: %c \n", Estado2);
    printf("Código: %s \n", Codigo2);
    printf("Nome da Cidade: %s \n", Cidade2);
    printf("População: %d \n", Populacao2);
    printf("Área: %f \n", Area2);
    printf("PIB: %f \n", PIB2);
    printf("Número de pontos turísticos: %d \n", Pontos_turisticos2);
    return 0;
}
