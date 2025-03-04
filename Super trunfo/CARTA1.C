#include <stdio.h>

//É de suma importância ler as declarações comentadas para poder entender o que está acontecendo no código e o que ele está te pedindo.
// Cadrasto da carta 1.
// Pais Brasil, estado Goias, cidade Goiânia . 
// Definindo as variáveis .
int main() {
    char estado[50];  //Estado " Goias".
    char codigodacidade[50]; // Nomeclatura do codigo da carta "G1".
    char nomeCidade[50]; // Cidade de "Goiânia".
    int populacao; // População de Goiânia "1437237".
    float area;  // Tamanho da Área "728296 km²".
    float pib; // Valor do Pib "59865989619".
    int turismo;  //Quantidades de pontos turistico "15".
    float densidadepopulacional; 
    float pibpercapita;

// Utilizei as "" apenas para destaca os valores ,nomes da ciadade e estado elas não são relevantes para roda o código.

//Informando os dados das variáveis  para impressão.

    printf("*** Digite os dados da cidade ***\n");

    printf("Estado: ");
    scanf("%s", estado);  //Quando estiver rodando o código irá pedir o nome do estado o mesmo será aquele comentado acima nas variaveis.

    printf("Código da cidade: ");
    scanf("%s", codigodacidade);  // O código está comentado acima na variável codigocidade.

    printf("Nome da cidade: ");
    scanf("%s", nomeCidade); // O nome da ciadade é o mesmo comentado na variável Nomecidade.

    printf("População: ");
    scanf("%d", &populacao); //A quantidade da população  é valor comentado na variável população.

    printf("Área: ");
    scanf("%f", &area);  // O tamanho da área está comentado na variável Área.

    printf("PIB: ");
    scanf("%f", &pib); // O valor do pib segue comentado na variável pib.

    printf("Pontos turísticos: ");
    scanf("%d", &turismo); // A quantidade de pontos turisticos está na variavel turismo.

// Após os valores das variáveis serem adiconados agora será feito a impressão dos mesmos .

    printf("\n*** Carta 1 ***\n");

    printf("Estado: %s\n", estado); // Imprimindo o nome do estado
    printf("Código da cidade: %s\n", codigodacidade); // Imprimindo o código da cidade
    printf("Nome da cidade: %s\n", nomeCidade); // Imprimindo o nome da cidade
    printf("População: %d\n", populacao); // Imprimindo a população
    printf("Área: %.2f\n", area); // Imprimindo a área com 2 casas decimais
    printf("PIB: %.2f\n", pib); // Imprimindo o PIB com 2 casas decimais
    printf("Pontos turísticos: %d\n", turismo); // Imprimindo os pontos turístico
   densidadepopulacional= (populacao/area);
   pibpercapita= (pib/populacao);

   printf("Densidade Populacional:%.2f \n",densidadepopulacional);
   printf("PIb per Capita: %.2f \n", pibpercapita);

    return 0;
}
