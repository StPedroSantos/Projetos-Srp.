#include <stdio.h>

//É de suma importância ler as declarações comentadas para poder entender o que está acontecendo no código e o que ele está te pedindo.
// Cadrasto das cartas 1 e 2.
// Definindo as variáveis .
int main() {
    char estado1[50], estado2[50];  //Estado " Goias",
    char codigodacidade1[50], codigodacidade2[50]; // Nomeclatura do codigo da carta "G1" , "AP1"
    char nomeCidade1[50] , nomeCidade2[50]; // Cidade1 de "Goiânia", Cidade2 "Jatai". 
    int populacao1 , populacao2; // População de Goiânia "1437237", População de Jatai"105729".
    float area1, area2;  // Tamanho da Área "728296 km²", "717425km²".
    float pib1 ,pib2; // Valor do Pib "598974 Bilhões", "7750 milhões".
    int turismo1 , turismo2;  //Quantidades de pontos turistico "15", "8"
    float densidadepopulacional1 , densidadepopulacional2; 
    float pibpercapita1 , pibpercapita2;

// Utilizei as "" apenas para destaca os valores ,nomes da ciadade e estado elas não são relevantes para roda o código.

//Informando os dados das variáveis  para impressão.

    printf("*** Digite os dados da cidade ***\n");

    printf("Estado: ");
    scanf("%s", estado1);  //Quando estiver rodando o código irá pedir o nome do estado o mesmo será aquele comentado acima nas variaveis.

    printf("Código da cidade: ");
    scanf("%s", codigodacidade1);  // O código está comentado acima na variável codigocidade.

    printf("Nome da cidade: ");
    scanf("%s", nomeCidade1); // O nome da ciadade é o mesmo comentado na variável Nomecidade.

    printf("População: ");
    scanf("%d", &populacao1); //A quantidade da população  é valor comentado na variável população.

    printf("Área: ");
    scanf("%f", &area1);  // O tamanho da área está comentado na variável Área.

    printf("PIB: ");
    scanf("%f", &pib1); // O valor do pib segue comentado na variável pib.

    printf("Pontos turísticos: ");
    scanf("%d", &turismo1); // A quantidade de pontos turisticos está na variavel turismo.

// Após os valores das variáveis serem adiconados agora será feito a impressão dos mesmos .

    printf("\n*** Carta 1 ***\n");

    printf("Estado: %s\n", estado1); // Imprimindo o nome do estado
    printf("Código da cidade: %s\n", codigodacidade1); // Imprimindo o código da cidade
    printf("Nome da cidade: %s\n", nomeCidade1); // Imprimindo o nome da cidade
    printf("População: %d\n", populacao1); // Imprimindo a população
    printf("Área: %.2f\n", area1); // Imprimindo a área com 2 casas decimais
    printf("PIB: %.2f\n", pib1); // Imprimindo o PIB com 2 casas decimais
    printf("Pontos turísticos: %d\n", turismo1); // Imprimindo os pontos turístico
   densidadepopulacional1= (populacao1/area1);
   pibpercapita1= (pib1/populacao1);

   printf("Densidade Populacional:%.2f \n",densidadepopulacional1);
   printf("PIb per Capita: %.2f \n", pibpercapita1);

   // Carta 2.
  // Seguir a mesma lógica de cadrastro da carta 1.

   printf("*** Digite os dados da cidade ***\n");

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


   printf("\n*** CARTA 2 ***\n");

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



    return 0;
}
