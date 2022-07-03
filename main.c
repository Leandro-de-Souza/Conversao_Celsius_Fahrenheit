#include <stdio.h>


int main()
{

        double tempC, tempF;
        char escala;

        printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
        scanf("%c", &escala);

        if (escala == 'F') {
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%lf", &tempF);

            tempC = (double) 5 / 9 * (tempF - 32);
            printf("Temperatura equivalente em Celsius: %.2lf", tempC);
        }
        else if (escala == 'C') {
            printf("Digite a temperatura em Celsius: ");
            scanf("%lf", &tempC);

            tempF = (double)(tempC * 9 / 5) + 32;
            printf("Temperatura equivalente em Fahrenheit: %.2lf", tempF);
        }



    return 0;
}
