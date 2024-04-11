#include <stdio.h>
#include "gameLayout.h"
#include "gamePlayers.h"

int main()
{
    char players[2][4] = {" ", " "};

    int game_matrix[3][3] = {{0, 0, 0},
                             {0, 0, 0},
                              0, 0, 0};

    printf("\n=== JOGO DA VELHA! ===\n");
    printf("\n    JOGADOR 1: O");
    printf("\n    JOGADOR 2: X");

    definePlayers(players);
    
    int turn = 0;

    while (1)
    {
        
        turn++;
        
        if (turn % 2 == 1)
        {
            printf("\nRODADA %d - %s", turn, players[0]);

            printf("\nTABULEIRO ATUAL:");
            showMatrix(game_matrix);

            
            
        }
        else
        {
            printf("\nRODADA %d - %s", turn, players[1]);
        }
    }

}