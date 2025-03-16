#include <stdio.h>

int main() {

    char estado1, estado2;                            //Letra de 'A' a 'H' para definir o estado
    char codigo1[4], codigo2[4];                      //Código no formato "A01", "B03"...
    char nome1[50], nome2[50];                        //Nome da cidade
    int populacao1, populacao2;                       //Número de habitantes
    float area1, area2;                               //Área da cidade em km²
    float PIB1, PIB2;                                 //Produto Interno Bruto
    int pontosTuristicos1, pontosTuristicos2;         //Quantidade de pontos turísticos


              // Carta 01 //

    printf("CARTA 1\n");
    printf("Escreva um estado de A - H \n");
    scanf("%c", &estado1);

    printf("Escreva o codigo: \n");
    scanf("%s", &codigo1);

    printf("Nome da cidade: \n");
    scanf("%s", &nome1);

    printf("Populacao: \n");
    scanf("%d", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB \n");
    scanf("%f", &PIB1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);


      //Exibição Carta 1//


    printf("CARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);


    
      // Carta 02 //


    printf("CARTA 2\n");
    printf("Escreva um estado de A - H \n");
    scanf("%c", &estado2);
  
    printf("Escreva o codigo: \n");
    scanf("%s", &codigo2);
  
    printf("Nome da cidade: \n");
    scanf("%s", &nome2);
  
    printf("Populacao: \n");
    scanf("%d", &populacao2);
  
    printf("Área: \n");
    scanf("%f", &area2);
  
    printf("PIB \n");
    scanf("%f", &PIB2);
  
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);
          
          
        //Exibição Carta 2//


    printf("CARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    

    return 0;
}