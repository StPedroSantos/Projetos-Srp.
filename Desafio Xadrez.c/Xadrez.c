#include <stdio.h>

void retorno1(int movimento1){   // Void de controle da Torre.
if (movimento1>0)   // Declarando a condição para evitar o loop infinito.
{ retorno1(movimento1-1);   
printf("A Torre moveu para a direita\n");} // Imprimindo o movimento da torre.
}

void retorno2(int movimento2){  // Void de controle da Rainha.
    if (movimento2>0) // Declarando a condição para evitar o loop infinito.
    { retorno2(movimento2-1); 
    printf("A Rainha moveu para a esquerda \n" );} } // Imprimindo o movimento da rainha.
 
void retorno3(int movimento3){  // Void de controle do Bispo.
    if (movimento3> 0) // Declarando a condição para evitar o loop infinito.
    {
        retorno3(movimento3 - 1);
    printf("O Bispo moveu pra cima na vertical/horizontal\n"); // Imprimindo o movimento do bispo.
     }  }

int main(){  // Informando as variavéis de controle .
 int torre =5;  // Quantidade de movimentos da torre.
 int rainha= 8; // Quantidade de movimentos da rainha.
 int bispo = 5; // Quantidade de movimentos do bispo.
printf("A peça que se meveu foi a(o) ... \n ");
retorno1(torre);
retorno2(rainha);
retorno3(bispo);  

//Loop complexo de controle de movimentos do cavalo.

for (int i = 2, j = 1; i <=2 && j <= 1; i++, j--) {  // Declarando as informações e condições.
    printf("O Cavalo moveu %d casa pra cima e %d para direita \n", i, j);  // Imprimindo os movimentos do cavalo. 
}
return 0;

}
