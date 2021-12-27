// circle.c : calcula e printa as areas dos circulos
#include <stdio.h> //diretiva do processador
double circularArea(double r); // declaraçao de funçao(atribui uma variavel (r) como parametro)

int main()
{
   double radius = 1.0, area = 0.0; //declara variavel radius e area e declara seus valores
 printf( " Áreas de Círculos\n\n" ); // printa o texto
 printf( " Área do raio\n"
 "-------------------------\n" );
 area = circularArea( radius ); // executa a funçao circularArea para calcular o valor da variavel area (atribuindo ao parametro (r) o valor da variavel radius)
 printf( "%10.1f %10.2f\n", radius, area ); // printa o valor calculado
 radius = 5.0; // atribui valor 5.0 para a variavel radius
 area = circularArea( radius ); // calcula a variavel area com o novo valor atribuido a variavel radius
 printf( "%10.1f %10.2f\n", radius, area ); // printa o valor calculado
 return 0; 
}

// A função circularArea() calcula a área de um círculo
// Parâmetro: o raio do círculo
// Valor de retorno: a área do círculo

double circularArea( double r ) // A definição de circularArea() começa
{
 const double pi = 3.1415926536; // Pi é uma constante
 return pi * r * r; //faz o calculo do circulo da area
}