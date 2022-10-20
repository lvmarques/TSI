#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 

Problema 01: Utilizando a linguagem e programação C e a estrutura de repetição "while" ou a estrutura "do..while", 
crie um algoritmo que exiba na tela a tabuada de multiplicação do número informado pelo usuário. Porém, a nossa tabuada 
será de 1 até 30, e não de 1 até 10, como no tradicional.

O número informado pelo usuário significa que quando o programa for executado, será solicitado que o usuário digite o número
 da tabuada, assim a tabuada gerada, de 1 até 30, será com o número que o usuário, aquele que está usando o sistema, informou.

Aluna: Leticia Vidal Marques - Matrícula: 20222TSIS3120

*/

int main(int argc, char *argv[]) { setlocale(LC_ALL,"Portuguese");

	// Definindo o tipo e nomeando a variável
	// Variável do tipo inteiro (%i)
	// n1 é o fator que o usuário deve informar para realizar o calculo, ele é o multiplicador.
   int n1;
    // n2 é o fator que receberá um valor no código, ele é o multiplicando.
   int n2 = 0;
   // mult é a variável para indicar a operação de multiplicação
   int mult;
   
   
    // Mensagem para que o usuário informe o multiplicador da operação.  
      printf("Digite o multiplicador. \n");
    // Após o usuário informar o multiplicador, este ficará armazenado em n1 devido o uso do &.
      scanf("%i", &n1);
     
     
    // Aqui a variável n2 tem valor de zero, o que é uma condição verdadeira, permitindo executar a repetição. Desta forma,
    // o programa vai imprimir o fator n2 com o valor zero e ...
    while (n2 < 30)
      	{
	// ... adicionar mais um ao seu valor, passando n2 ter valor de 1, 2, 3, sucessivamente enquanto os valores adicionados
	// na expressão abaixo chegarem até 30, ou seja, até o limite estabelecido no while.
          n2 = (n2 + 1);
    
    // A expressão abaixo vai apresentar o produto da multiplicação de n1 informado pelo usuário e n2 que se encontra na 
    // expressão teste while.
          mult = n1 * n2;
          
    // 1. A tela apresentará a seguinte informação a partir do multiplicador "n1" que o usuário digitar.
    // 2. "\n %i * %i = %i" -> Aqui a impressão dos números na tela serão do tipo inteiros.
    // 3. n1, n2 -> Depois fará a impressão dos valores atribuidos no código, sendo n1 o multiplicador, ou seja, o que será
    // informado pelo usuário. E n2 o multiplicando, ou seja, a variável que se encontra na expressão de teste e que será
    // verificada até que a contagem chegue a o número trinta.
    // 4. mult -> Apresentará o resultado da multiplicação da expressão "mult = n1 * n2"
          printf("\n %i * %i = %i", n1, n2, mult);
          
    	}

	return 0;
}
