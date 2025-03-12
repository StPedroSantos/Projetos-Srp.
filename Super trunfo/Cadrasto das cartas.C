#include <stdio.h>

// Cadrasto das cartas 1 e 2.
// Definindo as variáveis .
int main() {
    char carta1[50],carta2[50];
    char estado1[50], estado2[50];  
    char codigodacidade1[50], codigodacidade2[50]; 
    char nomeCidade1[50] , nomeCidade2[50];  
    int populacao1 , populacao2;
    float area1, area2;  
    float pib1 ,pib2; 
    int turismo1 , turismo2;  
    float densidadepopulacional1 , densidadepopulacional2; 
    float pibpercapita1 , pibpercapita2;
    float Superpoder1,Superpoder2;

    printf("*** Digite os dados da cidade ***\n");

    printf("Carta: ");
    scanf("%s", carta1);

    printf("Estado: ");
    scanf("%s", estado1); 

    printf("Código da cidade: ");
    scanf("%s", codigodacidade1);  

    printf("Nome da cidade: ");
    scanf("%s", nomeCidade1); 

    printf("População: ");
    scanf("%d", &populacao1); 

    printf("Área: ");
    scanf("%f", &area1); 

    printf("PIB: ");
    scanf("%f", &pib1); 

    printf("Pontos turísticos: ");
    scanf("%d", &turismo1); 


    printf("Carta: %s\n", carta1);
    printf("Estado: %s\n", estado1); 
    printf("Código da cidade: %s\n", codigodacidade1); 
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1); 
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1); 
    printf("Pontos turísticos: %d\n", turismo1); 
   densidadepopulacional1= (populacao1/area1);
   pibpercapita1= (pib1/populacao1);

   printf("Densidade Populacional:%.2f \n",densidadepopulacional1);
   printf("PIb per Capita: %.2f \n", pibpercapita1);

   Superpoder1= (float)+ area1+ pib1+ pibpercapita1+densidadepopulacional1 + turismo1+ populacao1;
  printf("Super poder : %.2f \n", Superpoder1);

   // Carta 2.
  
   printf("*** Digite os dados da cidade ***\n");

   printf("Carta : ");
   scanf("%s", carta2);  

   printf("Estado: ");
   scanf("%s", estado2);   

   printf("Código da cidade: ");
   scanf("%s", codigodacidade2);  

   printf("Nome da cidade: ");
   scanf("%s", nomeCidade2); 

   printf("População: ");
   scanf("%d", &populacao2); 

   printf("Área: ");
   scanf("%f", &area2);  
   printf("PIB: ");
   scanf("%f", &pib2); 

   printf("Pontos turísticos: ");
   scanf("%d", &turismo2);



   printf("Carta : %s\n", carta2);
   

   printf("Estado: %s\n", estado2); // Imprimindo o nome do estado
   printf("Código da cidade: %s\n", codigodacidade2); // Imprimindo o código da cidade
   printf("Nome da cidade: %s\n", nomeCidade2); // Imprimindo o nome da cidade
   printf("População: %d\n", populacao2); // Imprimindo a população
   printf("Área: %.2f\n", area2); // Imprimindo a área com 2 casas decimais
   printf("PIB: %.2f\n", pib2); // Imprimindo o PIB com 2 casas decimais
   printf("Pontos turísticos: %d\n", turismo2); // Imprimindo os pontos turísticos
   densidadepopulacional2= (populacao2/area2);
   pibpercapita2= (pib2/populacao2);

  printf("Densidade Populacional:%.2f \n",densidadepopulacional2);
  printf("PIb per Capita: %.2f \n", pibpercapita2);

  Superpoder2= (float)+ area2+ pib2+ pibpercapita2+densidadepopulacional2 + turismo2+ populacao2;
  printf("Super poder : %.2f \n", Superpoder2);
  
  printf("*** Carta 1 vs Carta 2 ***\n");

 printf("Carta 1- %s - População:%d \n ", nomeCidade1,populacao1);
 printf("Carta 2 - %s - População:%d \n ", nomeCidade2,populacao2);
 printf("Carta 1 - %s- Pib:%f \n",nomeCidade1, pib1);
 printf("Carta 2 - %s - Pib:%f \n", nomeCidade2,pib2);
 printf("Carta 1 - %s - Pontos Turiscos:%d \n", nomeCidade1, turismo1);
 printf("Carta 2 - %s - Pontos Turisticos:%d \n", nomeCidade2, turismo2);
printf("Carta 1 - %s - Área:%f \n",nomeCidade1,area1);
printf("Carta 2 - %s - Área:%f \n",nomeCidade2,area2);
printf("Carta 1 - %s - Pib Percapita:%f \n", nomeCidade1,pibpercapita1);
printf("Carta 2 - %s - Pib Percapita:%f \n", nomeCidade2,pibpercapita2);
printf("Carta 1 - %s - Super poder:%f \n", nomeCidade1,Superpoder1);
printf("Carta 2 - %s - Super poder:%f \n", nomeCidade2, Superpoder2);
printf("Carta 1 - %s - Densidade populacional:%f\n", nomeCidade1,densidadepopulacional1);
printf("Carta 2 - %s - Densidade populacional:%f\n",nomeCidade2,densidadepopulacional2);


  if (populacao1>populacao2)  {printf("Carta 1 venceu!\n");}
  else {printf("Carta 2 venceu!\n");}

  if (pib1>pib2)  {printf("Carta 1 venceu!\n");}
  else {printf("Carta 2 venceu!\n");}

  if (turismo1>turismo2)  {printf("Carta 1 venceu!\n");}
  else {printf("Carta 2 venceu!\n");}
  
  if (area1>area2)  {printf("Carta 1 venceu!\n");}
  else {printf("Carta 2 venceu!\n");}
  
  if (pibpercapita1>pibpercapita2)  {printf("Carta 1 venceu!\n");}
  else {printf("Carta 2 venceu!\n");}
  
  if (Superpoder1>Superpoder2)  {printf("Carta 1 venceu!\n");}
  else {printf("Carta 2 venceu!\n");}
  
  if (densidadepopulacional1<densidadepopulacional2)  {printf("Carta 1 venceu!\n");}
  else {printf("Carta 2 venceu!\n");}
   
    return 0;
}

