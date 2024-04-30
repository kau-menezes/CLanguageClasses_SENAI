#include <stdio.h>

void puppet ()
{
    printf("\n\n=== JOGO DA FORCA! ===\n\n");
    printf(" _____\n|     |\n|\n|\n|\n");

    char puppet[10] = {'O'};

}

void guesses ()
{
    char secret_word[5] = {'A', 'M', 'O', 'R', 'A'};
    char user_letter;
    char result[20] = {'-', '-', '-', '-', '-'};
    int i = 0, j = 1, equal=1, miss = 0;

    while (j < 10 && equal == 1)
    {
        printf("\n------------------------------------------------------------------");
        printf("\nTENTATIVA %d\n", j);
        printf("\nDigite sua tentativa: ");
        scanf(" %c", &user_letter);

        for (i = 0; i < 5; i++) 
        {
            if (user_letter == secret_word[i])
            {
                result[i] = user_letter;
            }
            else if (user_letter != secret_word[i] && result[i] != '-')
            {
                miss++;
            }
            else
            {
                result[i] = '-';
                miss++;
            }
        }
        
        for (i=0; i < 5; i++)
        {
            if (result[i] == secret_word[i])
            {
                equal = 0;
                ;
            }
            else
            {
                equal = 1;
                break;
            }
        }
        
        printf("\n\nDESCOBERTAS: %s\n", result);
        j = j + 1;

    }

    if (equal == 0)
    {
        printf("\n\n=== PARABÉNS! VOCÊ ACERTOU! ===\n\n");
    }
    else
    {
        printf("\n\n=== KKK ERROU OTARO");
    }

}

int main()
{
    puppet();
    guesses();
    return 0;
}