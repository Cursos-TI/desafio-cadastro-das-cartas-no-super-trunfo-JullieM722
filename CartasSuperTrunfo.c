#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //variaveis para preenchimentos das cartas.
    char pais[50];
    char estado[50];
    char cod_cidade[4];
    char nome[50];
    int pop; //população
    float area;
    float pib;
    int p_tur; // ponto turistico

    //Variaveis que farão calculos com base nos dados inseridos
    float dens_pop; //Desidade populacional
    float per_cap; //PIB per capita

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("REGISTRO DE CARTAS PARA O JOGO SUPER TRUNFO \n \n");

    //Printf e scanf para o usuario inserir os dados.
    printf("A carta de qual pais deseja registrar?\n");
    scanf("%s", &pais);

    printf("Qual estado deste pais e referente a carta?\n");
    scanf("%s", &estado, "\n \n");

    printf("Insira o código da cidade desta carta?\n"
            "Obs: Lembrando que o código em questão, deve conter:\n"
            "- a letra referente ao estado, sendo elas de A-H \n"
            "- e o número referente a cidade, sendo eles de 001-004 \n"
            "EX: A001, B002, C003 \n");
    scanf("%s", &cod_cidade);

    printf("Qual o nome da cidade da carta?\n");
    scanf("%s", &nome);

    printf("Qual o numero de habitantes da cidade em questão?\n");
    scanf("%d", &pop);

    printf("Qual a área da cidade?\n");
    scanf("%f", &area);

    printf("Qual o valor do PIB desta cidade?\n");
    scanf("%f", &pib);

    printf("A cidade em questão tem quantos pontos turisticos?\n");
    scanf("%d", &p_tur);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Valores a serem exibidos
    printf("A CARTA INSERIDA FOI A SEGUINTE: \n\n");
    printf("País: %s \n", pais);
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", cod_cidade);
    printf("Nome: %s \n", nome);
    printf("População: %d \n", pop);
    printf("Área: %.2f \n", area);
    printf("PIB: %.2f \n", pib);
    printf("Pontos Turisticos: %d \n", p_tur);
    printf("Densidade Populacional: %.2f \n", pop / area); //O %.2f faz a divisão das duas respectivas variaveis antes de imprimi-las
    printf("PIB Per Capita: %.2f \n", pib / pop); //O %.2f faz a divisão das duas respectivas variaveis antes de imprimi-las

    return 0;
}
