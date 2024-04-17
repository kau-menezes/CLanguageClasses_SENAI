#include <stdio.h>
#include <stdlib.h>

int main()
{
    char questions[3][60] = {{"Qual a capital de Pernambuco?"}, {"Em que número estou pensando?"}, {"Qual foi a mais importante medida do governo de J. Quadros?"}};
    int answers[3] = {0, 1, 2}, answer[3];
    char answers_shown[3][4][50] = 
    {
        {{"a) Recife"}, {"b) Alagoas"}, {"c) Jõao Pessoa"}, {"d) Ribeirão Preto"}}, 
        {{"a) 8"}, {"b) 69"}, {"c) 11"}, {"d) 2002"}}, 
        {{"a) Banir lança-perfume"}, {"b) Proibir o uso de biquínis"}, {"c) Proibir a rinha de galo"}, {"d) Proibir corridas de cavalo em dias úteis"}}
    };

    printf("\n=============== INSTRUÇÕES ===============\n");
    printf("Digite o número conforme a alternativa correta.\n\nALternativa A: 0\nALternativa B: 1\nAlternativa C: 2\nAlternativa D: 3\n\n");

    for(int i = 0; i < 3; i++)
    {
        printf("\n=============== PERGUNTA %d ===============\n", i+1);
        printf("%s\n", questions[i]);
        for (int j = 0; j < 4; j++)
        {
            printf("%s\n", answers_shown[i][j]);
        }

        printf("\nResposta: ");
        scanf("%d", &answer[i]);

    }

    for (int i = 0; i < 3; i++)
    {
        if (answers[i] == answer[i])
        {
            printf("Você acertou a %da pergunta! :)\n", i+1);
        }
        else
        {
            printf("Você errou a %da pergunta! :(\n", i+1);
        }
    }

}