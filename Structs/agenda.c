#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    int hours;
    int minutes; 

} Time;

typedef struct 
{
    int month;
    int day;
    int year;

} Date;

typedef struct 
{
    Time time;
    Date date;
    char description[50];
} Compromise;

int main () 
{

    printf("\n===     BEM-VINDO(A) A SUA AGENDA! ===     \n");
    printf("\n=== que guarda somente um compromisso!! ===\n");

    int hour, minute, month, day, year;
    char description[50], month_c[10];
    FILE * file = fopen("agenda.txt", "w");

    printf("\nO horário do seu compromisso deve seguir o formato de 24h.");
    printf("\nDigite em qual hora do dia se dará seu compromisso: ");
    scanf("%d", &hour);

    while (hour < 0 || hour > 23) 
    {
        printf("\nHora não permitida. :(");
        printf("\nDigite em qual hora do dia se dará seu compromisso: ");
        scanf("%d", &hour);

    } 

    printf("\nDigite agora os minutos: ");
    scanf("%d", &minute);

    while (minute < 0 || minute > 59) 
    {
        printf("\nMinuto não permitida. :(");
        printf("\nDigite em qual hora do dia se dará seu compromisso: ");
        scanf("%d", &minute);
    }

    printf("\nDigite agora o dia do seu compromisso: ");
    scanf("%d", &day);

    while (day < 0 || day > 31) 
    {
        printf("\nDia não permitida. :(");
        printf("\nDigite agora o dia do seu compromisso: ");
        scanf("%d", &day);

    }

    printf("\nDigite agora o mês do seu compromisso: ");
    scanf("%d", &month);

    while (month < 0 || month > 12) 
    {
        printf("\nMês não permitido. :(");
        printf("\nDigite agora o dia do seu compromisso: ");
        scanf("%d", &month);

    }

    printf("\nDigite agora em que ano se dará seu compromisso: ");
    scanf("%d", &year);

    printf("\nDigite em 50 carcteres uma breve descrição do seu compromisso: ");
    scanf(" %[^\n]s", description);

    Compromise compromise;

    compromise.time.hours = hour;
    compromise.time.minutes = minute;
    compromise.date.day = day;
    compromise.date.month = month;
    compromise.date.year = year;
    strcpy(compromise.description, description);


    // registrar no txt
    fprintf(file, "=== AGENDINHA TOP ===\n");

    // pega o int e transofmra pra str
    switch (year)
    {
        case 1:
        strcpy(month_c, "Janeiro");
        break;
    
        case 2:
        strcpy(month_c, "Fevereiro");
        break;
    
        case 3:
        strcpy(month_c, "Março");
        break;
    
        case 4:
        strcpy(month_c, "Abril");
        break;
    
        case 5:
        strcpy(month_c, "Maio");
        break;
    
        case 6:
        strcpy(month_c, "Junho");
        break;
    
        case 7:
        strcpy(month_c, "Julho");
        break;

        case 8:
        strcpy(month_c, "Agosto");
        break;

        case 9:
        strcpy(month_c, "Setembro");
        break;

        case 10:
        strcpy(month_c, "Outubro");
        break;

        case 11:
        strcpy(month_c, "Novembro");
        break;

        case 12:
        strcpy(month_c, "Dezembro");
        break;

    }

    fprintf(file, "\nDia %d de %s do ano %d", day, month_c, year);
    fprintf(file, "\nÀs %d horas e %d minutos", hour, minute);
    fprintf(file, "\nDescrição: %s", description);

    fclose(file);

    return 0;
    
}