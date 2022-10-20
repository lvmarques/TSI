#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 

Problema 01: Utilizando a linguagem e programa��o C e a estrutura de repeti��o "while" ou a estrutura "do..while", 
crie um algoritmo que exiba na tela a tabuada de multiplica��o do n�mero informado pelo usu�rio. Por�m, a nossa tabuada 
ser� de 1 at� 30, e n�o de 1 at� 10, como no tradicional.

O n�mero informado pelo usu�rio significa que quando o programa for executado, ser� solicitado que o usu�rio digite o n�mero
 da tabuada, assim a tabuada gerada, de 1 at� 30, ser� com o n�mero que o usu�rio, aquele que est� usando o sistema, informou.

Aluna: Leticia Vidal Marques - Matr�cula: 20222TSIS3120

*/

int main(int argc, char *argv[]) { setlocale(LC_ALL,"Portuguese");

	// Definindo o tipo e nomeando a vari�vel
	// Vari�vel do tipo inteiro (%i)
	// n1 � o fator que o usu�rio deve informar para realizar o calculo, ele � o multiplicador.
   int n1;
    // n2 � o fator que receber� um valor no c�digo, ele � o multiplicando.
   int n2 = 0;
   // mult � a vari�vel para indicar a opera��o de multiplica��o
   int mult;
   
   
    // Mensagem para que o usu�rio informe o multiplicador da opera��o.  
      printf("Digite o multiplicador. \n");
    // Ap�s o usu�rio informar o multiplicador, este ficar� armazenado em n1 devido o uso do &.
      scanf("%i", &n1);
     
     
    // Aqui a vari�vel n2 tem valor de zero, o que � uma condi��o verdadeira, permitindo executar a repeti��o. Desta forma,
    // o programa vai imprimir o fator n2 com o valor zero e ...
    while (n2 < 30)
      	{
	// ... adicionar mais um ao seu valor, passando n2 ter valor de 1, 2, 3, sucessivamente enquanto os valores adicionados
	// na express�o abaixo chegarem at� 30, ou seja, at� o limite estabelecido no while.
          n2 = (n2 + 1);
    
    // A express�o abaixo vai apresentar o produto da multiplica��o de n1 informado pelo usu�rio e n2 que se encontra na 
    // express�o teste while.
          mult = n1 * n2;
          
    // 1. A tela apresentar� a seguinte informa��o a partir do multiplicador "n1" que o usu�rio digitar.
    // 2. "\n %i * %i = %i" -> Aqui a impress�o dos n�meros na tela ser�o do tipo inteiros.
    // 3. n1, n2 -> Depois far� a impress�o dos valores atribuidos no c�digo, sendo n1 o multiplicador, ou seja, o que ser�
    // informado pelo usu�rio. E n2 o multiplicando, ou seja, a vari�vel que se encontra na express�o de teste e que ser�
    // verificada at� que a contagem chegue a o n�mero trinta.
    // 4. mult -> Apresentar� o resultado da multiplica��o da express�o "mult = n1 * n2"
          printf("\n %i * %i = %i", n1, n2, mult);
          
    	}

	return 0;
}
