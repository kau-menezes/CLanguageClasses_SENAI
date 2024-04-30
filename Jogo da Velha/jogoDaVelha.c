#include <stdio.h>
#include "gameLayout.h"
#include "gamePlayers.h"
#include "gameValidation.h"

int main()
{

    char players[2][4];

    int game_matrix[3][3] = {{3, 3, 3}, {3, 3, 3}, {3, 3, 3}};

    printf("\n===============  JOGO DA VELHA! =============== \n");
    printf("\n\n    JOGADOR 1: O");
    printf("\n\n    JOGADOR 2: X\n");

    printf("\n=============== INSTRUÇÕES DE JOGO =============== \n");
    printf("\nPOSIÇÕES DO TABULEIRO:\n\n");
    printf("0  1  2\n\n3  4  5\n\n6  7  8\n\n");

    definePlayers(players);

    int turn = 0, position = 0, validate = 0;

    showMatrix(game_matrix);

    while (turn < 10)
    {

        turn++;
  
        if (turn % 2 == 1)
        {
            printf("\n\n=============== RODADA %d - %s =============== \n", turn, &players[0]);      

            // asks the user wichj position he'd like to play
            printf("\nESCOLHA A POSIÇÃO QUE DESEJA JOGAR: ");
            scanf("%d", &position);

            // changes the matrix value
            changeMatrix(game_matrix, position, 0);
            showMatrix(game_matrix);
            
            validateWin(game_matrix);
            validate = validateWin(game_matrix);

            if (validate == 1)
            {
                printf("\nVocê ganhou!\n");
                break;
            }

         }
         else
         {
            printf("\n\n===============  RODADA %d - %s =============== ", turn, &players[1]);

            // asks the user wichj position he'd like to play
            printf("\nESCOLHA A POSIÇÃO QUE DESEJA JOGAR:");
            scanf("%d", &position);

            // changes the matrix value
            changeMatrix(game_matrix, position, 1);
            showMatrix(game_matrix);

            validateWin(game_matrix);
            validate = validateWin(game_matrix);

            if (validate == 1)
            {
                printf("\nVocê ganhou!\n");
                break;
            }

         }
     
    }

    return 0;
}