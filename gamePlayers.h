#ifndef gamePlayers_h
#define gamePlayers_h
#include <stdio.h>

int definePlayers(char * array_p)
{

    printf("=============== JOGADORES =============== ");
    for (int i = 0; i < 2; i++)
    {
        printf("\nDigite o nickname do JOGADOR %d usando TRES LETRAS: ", i+1);
        scanf("%s", &array_p[i]);
    }

    return 0;
}

#endif