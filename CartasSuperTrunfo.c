#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //variaveis para preenchimentos das cartas, com vetor para que possem ser armazenados 2 valores diferentes usando a mesma variavel
    char pais[2][50];
    char estado[2][50];
    char cod_cidade[2][4];
    char nome[2][50];
    int pop[2]; //população
    float area[2];
    float pib[2];
    int p_tur[2]; // ponto turistico

    //Variaveis que farão calculos com base nos dados inseridos
    float dens_pop[2]; //Desidade populacional
    float per_cap[2]; //PIB per capita
    float poder[2]; //super poder das cartas

    int vencedor[2]; // vai acrescentar pontos na carta vencedora de acordo com a comparação.

    // Cadastro das Cartas:
    printf("REGISTRO DE CARTAS PARA O JOGO SUPER TRUNFO \n \n");

    //a estrutura de repetição for vai rodar 2 vezes e armazenar o dados inseridos nos vetores.
    for (int i = 0; i < 2; i++) {
        printf("Qual o país da %dº carta?\n", i);
        scanf("%s", &pais[i]);

        printf("Qual estado deste pais e referente a %dº carta?\n", i);
        scanf("%s", &estado[i], "\n \n");

        printf("Insira o código da cidade da %dº carta?\n", i);
        printf("Obs: Lembrando que o código em questão, deve conter:\n");
        printf("- a letra referente ao estado, sendo elas de A-H \n");
        printf("- e o número referente a cidade, sendo eles de 001-004 \n");
        printf("EX: A001, B002, C003 \n");
        scanf("%s", &cod_cidade[i]);

        printf("Qual a cidade da %dº carta?\n", i);
        scanf("%s", &nome[i]);

        printf("Qual o numero de habitantes da cidade em questão?\n");
        scanf("%d", &pop[i]);

        printf("Qual a área da cidade?\n");
        scanf("%f", &area[i]);

        printf("Qual o valor do PIB desta cidade?\n");
        scanf("%f", &pib[i]);

        printf("A cidade em questão tem quantos pontos turisticos?\n");
        scanf("%d", &p_tur[i]);

        //calcula o super densidade pop., PIB per capita e poder
        dens_pop[i]= pop[i] / area[i];
        per_cap[i]= pib[i] / pop[i];
        poder[i] = pop[i] + area[i] + pib[i] + p_tur[i] + dens_pop[i] + per_cap[i];
    }

    //comparação das cartas
    printf("COMPARAÇÃO DAS PROPRIEDADES \n \n");

    //Compara população
    if (pop[0] > pop[1]) { //População da primeira carta inserida é maior
        printf("População:\n");
        printf("%s - %d > %s - %d \n", cod_cidade[0],pop[0],cod_cidade[1], pop[1]);
        printf("A carta %s venceu \n",cod_cidade[0]);
        vencedor[0]++;
    } else if (pop[0] == pop[1]){ //População das cartas empataram
        printf("População:\n");
        printf("%s - %d = %s - %d \n", cod_cidade[0],pop[0],cod_cidade[1], pop[1]);
        printf("As cartas empataram \n");
    } else{ // População da segunda carta é maior
        printf("População:\n");
        printf("%s - %d > %s - %d \n", cod_cidade[1],pop[1],cod_cidade[0], pop[0]);
        printf("A carta %s venceu \n",cod_cidade[1]);
        vencedor[1]++;
    }

    //Compara área
    if (area[0] > area[1]) { //Área primeira carta inserida é maior
        printf("Área:\n");
        printf("%s - %.2f > %s - %.2f \n", cod_cidade[0],area[0],cod_cidade[1], area[1]);
        printf("A carta %s venceu \n",cod_cidade[0]);
        vencedor[0]++;
    } else if (area[0] == area[1]){ //Área das cartas empataram
        printf("Área:\n");
        printf("%s - %.2f = %s - %.2f \n", cod_cidade[0],area[0],cod_cidade[1], area[1]);
        printf("As cartas empataram \n");
    } else{
        printf("Área:\n"); //Área da segunda carta inserida é maior
        printf("%s = %.2f > %s = %.2f \n", cod_cidade[1],area[1],cod_cidade[0], area[0]);
        printf("A carta %s venceu \n",cod_cidade[1]);
        vencedor[1]++;
    }

    //Compara PIB
    if (pib[0] > pib[1]) { //PIB da primeira carta inserida é maior
        printf("PIB:\n");
        printf("%s - %.2f > %s - %.2f \n", cod_cidade[0],pib[0],cod_cidade[1], pib[1]);
        printf("A carta %s venceu \n",cod_cidade[0]);
        vencedor[0]++;
    } else if (pib[0] == pib[1]){ //PIB das cartas empataram
        printf("PIB:\n");
        printf("%s - %.2f = %s - %.2f \n", cod_cidade[0],pib[0],cod_cidade[1], pib[1]);
        printf("As cartas empataram \n");
    } else{ //PIB da segunda carta inserida é maior
        printf("PIB:\n");
        printf("%s - %.2f > %s - %.2f \n", cod_cidade[1],pib[1],cod_cidade[0], pib[0]);
        printf("A carta %s venceu \n",cod_cidade[1]);
        vencedor[1]++;
    }
    
    //Compara ponto turistico
    if (p_tur[0] > p_tur[1]) { //Ponto turistico da primeira carta inserida é maior
        printf("Ponto Turistico:\n");
        printf("%s - %d > %s - %d \n", cod_cidade[0],p_tur[0],cod_cidade[1], p_tur[1]);
        printf("A carta %s venceu \n",cod_cidade[0]);
        vencedor[0]++;
    } else if (p_tur[0] == p_tur[1]){ //Ponto turistico das cartas empataram
        printf("Ponto Turistico:\n");
        printf("%s - %d = %s - %d \n", cod_cidade[0],p_tur[0],cod_cidade[1], p_tur[1]);
        printf("As cartas empataram \n");
    } else{ //Ponto turistico da segunda carta inserida é maior
        printf("Ponto Turistico:\n");
        printf("%s - %d > %s - %d \n", cod_cidade[1],p_tur[1],cod_cidade[0], p_tur[0]);
        printf("A carta %s venceu \n",cod_cidade[1]);
        vencedor[1]++;
    }
    
    //Compara densidade populacional
    if (dens_pop[0] < dens_pop[1]) { //Densidade populacional da primeira carta é menor
        printf("Densidade Populacional:\n");
        printf("%s - %.2f < %s - %.2f \n", cod_cidade[0],dens_pop[0],cod_cidade[1], dens_pop[1]);
        printf("A carta %s venceu \n",cod_cidade[0]);
        vencedor[0]++;
    } else if (dens_pop[0] == dens_pop[1]){ //Densidade populacional das cartas empataram
        printf("Densidade Populacional:\n");
        printf("%s - %.2f = %s - %.2f \n", cod_cidade[0],dens_pop[0],cod_cidade[1], dens_pop[1]);
        printf("As cartas empataram \n");
    } else{ //Densidade populacional da segunda carta inserida é menor
        printf("Densidade Populacional:\n");
        printf("%s - %.2f < %s - %.2f \n", cod_cidade[1],dens_pop[1],cod_cidade[0], dens_pop[0]);
        printf("A carta %s venceu \n",cod_cidade[1]);
        vencedor[1]++;
    }
    
    //Compara PIB per capita
    if (per_cap[0] > per_cap[1]) { //PIB per capita da primeira carta é maior
        printf("PIB Per Capita:\n");
        printf("%s - %.2f > %s - %.2f \n", cod_cidade[0],per_cap[0],cod_cidade[1], per_cap[1]);
        printf("A carta %s venceu \n",cod_cidade[0]);
        vencedor[0]++;
    } else if (per_cap[0] == per_cap[1]){ //PIB per capita das cartas empataram
        printf("PIB Per Capita:\n");
        printf("%s - %.2f = %s - %.2f \n", cod_cidade[0],per_cap[0],cod_cidade[1], per_cap[1]);
        printf("As cartas empataram \n");
    } else{ //PIB per capita da segunda carta inserida é maior
        printf("PIB Per Capita:\n");
        printf("%s - %.2f > %s - %.2f \n", cod_cidade[1],per_cap[1],cod_cidade[0], per_cap[0]);
        printf("A carta %s venceu \n",cod_cidade[1]);
        vencedor[1]++;
    }
    
    //Compara super poder
    if (poder[0] > poder[1]) { //Super poder da primeira carta inserida é maior
        printf("Super Poder:\n");
        printf("%s - %.2f > %s - %.2f \n", cod_cidade[0],poder[0],cod_cidade[1], poder[1]);
        printf("A carta %s venceu \n",cod_cidade[0]);
        vencedor[0]++;
    } else if (per_cap[0] == per_cap[1]){ //Super poder das cartas empataram
        printf("Super Poder:\n");
        printf("%s - %.2f = %s - %.2f \n", cod_cidade[0],poder[0],cod_cidade[1], poder[1]);
        printf("As cartas empataram \n");
    } else{ //Super poder da segunda carta é maior
        printf("Super Poder:\n");
        printf("%s - %.2f > %s - %.2f \n", cod_cidade[1],poder[1],cod_cidade[0], poder[0]);
        printf("A carta %s venceu \n",cod_cidade[1]);
        vencedor[1]++;
    }

    //Exibição da carta vencedora
    if (vencedor[0] > vencedor[1]){
        // Exibição dos Dados da primeira carta (caso ela seja a vencedora):
        printf("A CARTA VENCEDORA FOI: \n\n");
        printf("País: %s \n", pais[0]);
        printf("Estado: %s \n", estado[0]);
        printf("Código: %s \n", cod_cidade[0]);
        printf("Nome: %s \n", nome[0]);
        printf("População: %d \n", pop[0]);
        printf("Área: %.2f \n", area[0]);
        printf("PIB: %.2f \n", pib[0]);
        printf("Pontos Turisticos: %d \n", p_tur[0]);
        printf("Densidade Populacional: %.2f \n", dens_pop[0]); 
        printf("PIB Per Capita: %.2f \n", per_cap[0]);
        printf("Super Poder: %.2f \n", poder[0]);
    }else{
        // Exibição dos Dados da segunda carta (caso ela seja a vencedora):
        printf("A CARTA VENCEDORA FOI: \n\n");
        printf("País: %s \n", pais[1]);
        printf("Estado: %s \n", estado[1]);
        printf("Código: %s \n", cod_cidade[1]);
        printf("Nome: %s \n", nome[1]);
        printf("População: %d \n", pop[1]);
        printf("Área: %.2f \n", area[1]);
        printf("PIB: %.2f \n", pib[1]);
        printf("Pontos Turisticos: %d \n", p_tur[1]);
        printf("Densidade Populacional: %.2f \n", dens_pop[1]);
        printf("PIB Per Capita: %.2f \n", per_cap[1]);
        printf("Super Poder: %.2f \n", poder[1]);
    }
    
    return 0;
}
