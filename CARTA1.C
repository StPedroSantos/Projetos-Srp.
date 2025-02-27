#include <stdio.h>

//É de suma importância ler as declarações comentadas para poder entender o que está acontecendo no código e o que ele está te pedindo.
// Cadrasto da carta 1.
// Pais Brasil, estado Goias, cidade Goiânia . 
// Definindo as variáveis .
int main() {
    char estado[50];  //Estado " Goias".
    char codigodacidade[50]; // Nomeclatura do codigo da carta "G1".
    char nomeCidade[50]; // Cidade de "Goiânia".
    int populacao; // População de Goiânia "143.7237".
    float area;  // Tamanho da Área "728.296 km²".
    float pib=; // Valor do Pib "59.000.000.000".
    int turismo;  //Quantidades de pontos turistico "15".

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

    printf("\n*** Dados da cidade ***\n");

    printf("Estado: %s\n", estado); // Imprimindo o nome do estado
    printf("Código da cidade: %s\n", codigodacidade); // Imprimindo o código da cidade
    printf("Nome da cidade: %s\n", nomeCidade); // Imprimindo o nome da cidade
    printf("População: %d\n", populacao); // Imprimindo a população
    printf("Área: %.2f\n", area); // Imprimindo a área com 2 casas decimais
    printf("PIB: %.2f\n", pib); // Imprimindo o PIB com 2 casas decimais
    printf("Pontos turísticos: %d\n", turismo); // Imprimindo os pontos turísticos
//Carta 2
    char estado[50];  //Estado " Mato grosso".
    char codigodacidade[50]; // Nomeclatura do codigo da carta "R1".
    char nomeCidade[50]; // Cidade de "Rondonópolis".
    int populacao; // População de Goiânia "244911".
    float area;  // Tamanho da Área "4165km²".
    float pib=; // Valor do Pib "17.000.000.000".
    int turismo;  //Quantidades de pontos turistico "6".

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

    printf("\n*** Dados da cidade ***\n");

    printf("Estado: %s\n", estado); // Imprimindo o nome do estado
    printf("Código da cidade: %s\n", codigodacidade); // Imprimindo o código da cidade
    printf("Nome da cidade: %s\n", nomeCidade); // Imprimindo o nome da cidade
    printf("População: %d\n", populacao); // Imprimindo a população
    printf("Área: %.2f\n", area); // Imprimindo a área com 2 casas decimais
    printf("PIB: %.2f\n", pib); // Imprimindo o PIB com 2 casas decimais
    printf("Pontos turísticos: %d\n", turismo); // Imprimindo os pontos turísticos











    
    return 0;
}
