#include <stdio.h>

int main(){
    int ans, tempC, tempF;
    printf("\n=== CONVERSOR DE TEMPERATURA ===\n");
    printf("Qual operação deseja realizar?\n\n[1] Converter CELSIUS para FAHRENHEIT\n[2] Converter FAHRENHEIT para CELSIUS\n\nR: ");
    scanf("%i", &ans);

    switch(ans)
    {
        case 1:
        printf("\nDigite a temperatura em CELSIUS a ser convertida para FAHRENHEIT: ");
        scanf("%i", &tempC);

        tempF = tempC*1.8 + 32;
        printf("%i Graus CELSIUS se tornam %i Graus FAHRENHEIT", tempC, tempF);
        break;

        case 2:
        printf("Digite a temperatura em FAHRENHEIT a ser convertida para CELSIUS: ");
        scanf("%i", &tempF);

        tempC = (tempF - 32)/1.8;
        printf("%i Graus FAHRENHEIT se tornam %i Graus CELSIUS", tempF, tempC);
        break;
    }

    printf("%s",(tempC>36) ? "\nTemperatura Elevada! Cuidado! :O" : "\nTemperatura agradavel! :)");
    printf("\n\nPROGRAMA ENCERRADO!");

    return 0;
}