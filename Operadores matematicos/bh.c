#include <stdio.h>

int main(){

float temperatura, umidade;
unsigned int estoque, estoqueMinimo=1000;

printf("Entre com a temperatura:\n" );
scanf("%f", &temperatura);
printf("Entre com a umidade: \n");
scanf("%f", &umidade);
printf("Entre com o estoque :\n");
scanf("%u", &estoque);

if (temperatura> 30)
{printf("Temperatura alta. \n ");}
 else{printf("Temperatura elevada. \n");}   

if (umidade> 40)
{ printf("Umidade alta. \n");}
else{printf("Umidade normal.\n");}

if (estoque<estoqueMinimo)
{printf("Estoque abaixo do planejado.\n");}
else{printf("Estoque dentro do planejado.\n");}
    

}