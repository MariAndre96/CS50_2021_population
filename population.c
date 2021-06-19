#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Solicitar tamaño de inicio// que la entrada del usuario sea a lo menos 9

    int n;

    do

    {
        n = get_int("Start size: ");
    }

    while (n <= 8);

    // TODO: Solicitar el tamaño final// que la respuesta sea a lo menos igual al resultado de inicio

    int i;

    do

    {
        i = get_int("End size: ");
    }

    while (i < n);

      // TODO: Calcular el número de años hasta alcanzar el umbral
   
    int year_total = 0;  
    
    if (i == n)
    
    printf("Years: 0\n");
    
    else 
    
    {
    
    do
    
    {
       n = n + (n/3) - (n/4);
       year_total++;
       
    }
   while (n < i);
   
      // TODO: Imprime el número de años
    printf("Years: %i\n", year_total);
    }

    
}