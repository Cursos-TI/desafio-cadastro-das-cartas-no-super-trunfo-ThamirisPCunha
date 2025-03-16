#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

#include <stdio.h>

  int main(){
    //Super Trunfo

    char estado1 ='A';
    char codigo1[20] = "01";
    char cidade1[20] = "Salvador";
    int populaçao1 = 141400;
    float area1 = 567.295;
    float pib1 = 482.8000;
    int pontos1 = 78;

    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populaçao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos turísticos: %d\n\n", pontos1);

    char estado2 ='B';
    char codigo2[20] = "02";
    char cidade2[20] = "Pernambuco";
    int populaçao2 = 90590000;
    float area2 = 98.312;
    float pib2 = 254.900000;
    int pontos2 = 70;

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populaçao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos turísticos: %d", pontos2);

  }
