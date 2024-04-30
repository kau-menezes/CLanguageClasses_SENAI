// exercício 4
#include <stdio.h>
#include <string.h>

int main()
{
    char password[20] = "", guess[50] = "";
    int qtd = 0, size = 0, choice = 0;

    printf("\n\nDefina uma senha para o acesso: ");
    scanf("%s", password);

    printf("\n=== QUANTIDADE DO PRODUTO A NO ESTOQUE: %d", qtd);
    printf("\n=== TAMANHO DO PRODUTO A: %d", size);

    printf("\n\nDeseja realizar alguma alteração nos valores?\n\n[1] Sim\n\n[2] Não\n\nR: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:

        while (strcmp(guess, password) != 0)
        {
            printf("\n\nDigite a senha para prosseguir: ");
            scanf("%s", guess);

            if (guess != password)
            {
                printf("\n\nSenha incorreta! Tente novamente!\n");
            }

            printf("\n\nSenha correta! Prossiga...");

            printf("\n\nQual valor deseja alterar?\n\n[1] Quantidade\n\n[2] Tamanho\n\nR: ");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                printf("\n\nDigite o novo valor para a quantidade do Produto em Estoque: ");
                scanf("%d", &qtd);
                break;

            case 2:
                printf("\n\nDigite o novo valor para o tamanho do Produto: ");
                scanf("%d", &size);
                break;

            default:
                printf("\n\nA opção escolhida não está disponível e por isso o programa será encerrado. :( ");
                break;
            }

            printf("\n=== QUANTIDADE DO PRODUTO A NO ESTOQUE: %d", qtd);
            printf("\n=== TAMANHO DO PRODUTO A: %d", size);

            break;

        case 2:
            printf("\nPrograma encerrado.");
            return 0;

        default:
            printf("A opção escolhida não está disponível e por isso o programa será encerrado. :( ");
            break;
            return 0;
        }
    }
}
