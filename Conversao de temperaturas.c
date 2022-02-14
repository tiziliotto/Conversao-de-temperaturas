#include <stdio.h>
#include <math.h>

/*Programa le a temperatura em Celsius e converte para Fahrenheit e Kelvin*/
int main ()
{
    double celsius;
    double fahrenheit;
    double kelvin;
    char opcao;

    printf ("Insira a temperatura em Celsius: ");
    scanf ("%lf", &celsius);

    printf ("(Insira f para Fahrenheit e k para Kelvin)\n");
    printf ("Para que escala gostaria de transformar a temperatura? ");
    scanf (" %c", &opcao);



    if (opcao == 'f')
    {
        fahrenheit = (1.8 * celsius) + 32;
        printf ("O valor da temperatura em Fahrenheit e: %.2lfF", fahrenheit);
    }
    else if (opcao == 'k')
    {
        kelvin = celsius + 273;
        printf ("O valor da temperatura em Kelvin e: %.2lfK", kelvin);
    }
    else if (opcao != 'f' || 'k')
    {
        printf ("Escala invalida");
    }

    return 0;
}
