#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Cadastramento da 1ª e 2ª Carta
  char codEstado_A[] = "A";
  char codEstado_B[] = "B";
  char codcidade_1A[5] = "A01";
  char codcidade_2A[5] = "A02";
  char codcidade_1B[5] = "B01";
  char codcidade_2B[5] = "B02";
  
  // Área para entrada de dados
  int populacao_A01 = 200;
  int populacao_A02 = 500;
  int populacao_B01 = 150;
  int populacao_B02 = 750;
  float area_A01 = 353.90;
  float area_A02 = 134.87;
  float area_B01 = 122.35;
  float area_B02 = 100.35;
  float pib_A01 = 230.15;
  float pib_A02 = 144.35;
  float pib_B01 = 123.56;
  float pib_B02 = 178.98;
  int pturismo_01A = 34;
  int pturismo_02A = 20;
  int pturismo_01B = 15;
  int pturismo_02B = 18;
  char estado_A[10] = "Ceará";
  char estado_B[10] = "Paraíba";
  char cidade_01[10] = "Fortaleza";
  char cidade_02[10] = "Maracanaú";
  char cidade_B1[10] = "Patos";
  char cidade_B2[10] = "Umari";
  float densidade_A01 = populacao_A01/area_A01;
  float densidade_B01 = populacao_B01/area_B02;
  float PIBperC_A01 = pib_A01/populacao_A01;
  float PIBperC_B01 = pib_B01/populacao_B01;


  // Área para exibição dos dados da cidade
  printf("\n");
  printf("Carta 1\n");
  printf("código Estado - %s, codigo cidade - %s\n",codEstado_A, codcidade_1A);
  printf("Estado: %s\n",estado_A);
  printf("cidade: %s\n",codcidade_1A);
  printf("População: %d milhões\n",populacao_A01);
  printf("Àrea: %.2f Km²\n", area_A01);
  printf("PIB: %.2f bilhôes\n",pib_A01);
  printf("Ponto turístico: %d\n",pturismo_01A);
  printf("Densidade demogáfica: %.2f milhôes hab/Km²\n",densidade_A01);
  printf("PIB per capita: $ %.2f/hab bilhôes de reais\n",PIBperC_A01);
  printf("\n");
  printf("#####################################\n");
  printf("\n");
  printf("\n");
  printf("Carta 2\n");
  printf("código Estado - %s, codigo cidade - %s\n",codEstado_B, codcidade_1B);
  printf("Estado: %s\n",estado_B);
  printf("cidade: %s\n",codcidade_1B);
  printf("População: %d miljhões\n",populacao_B01);
  printf("Àrea: %.2f Km²\n", area_B01);
  printf("PIB: %.2f bilhões\n",pib_B01);
  printf("Ponto turístico: %d\n",pturismo_01B);
   printf("Densidade demogáfica: %.2f milhôes hab/Km²\n",densidade_B01);
  printf("PIB per capita: $ %.2f/hab bilhões de reais\n",PIBperC_B01);
return 0;
} 
