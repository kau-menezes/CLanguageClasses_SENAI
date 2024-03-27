#ifndef BANCO_H
#define BANCO_H

#include <stdio.h>
#include <time.h>

int money = 50, withdraw_qtd = 0, deposit_qtd = 0;

char name[20] = "";

FILE * arquivo;

void innit ()
{
    arquivo = fopen("extrato_e_movimentacoes.txt", "a");
    printf("\nDigite o nome do(a) dono(a) da conta: ");
    scanf("%s", name);
    fprintf(arquivo, "== EXTRATO E MOVIMENTACOES DO(A) %s ==\n", name);
    fclose(arquivo);
}

int deposit()
{
    arquivo = fopen("extrato_e_movimentacoes.txt", "a");
    printf("\n-- REALIZANDO DEPÓSITO --\nQuanto deseja depositar? ");
    scanf("%d", &deposit_qtd);
    money = money + deposit_qtd;
    printf("\n\nDEPÓSITO REALIZADO COM SUCESSO!");
    fprintf(arquivo, "\nDEPÓSITO DE: R$ %d", deposit_qtd);
    fclose(arquivo);

    return 0;
    
}

int withdraw()
{
    printf("-- REALIZANDO SAQUE --\n Quanto deseja sacar? ");
    scanf("%d", &withdraw_qtd);
    if (withdraw_qtd > 100)
    {
        printf("\nA quantia que deseja sacar supera o limite estabelecido para a conta. :(\n");
    }
    else if (withdraw_qtd > money)
    {
        printf("\nA quantia que deseja sacar supera o valor disponível na conta. :(\n");
    }
    else
    {
        arquivo = fopen("extrato_e_movimentacoes.txt", "a");
        money = money - withdraw_qtd;
        printf("\nSAQUE REALIZADO COM SUCESSO!");
        fprintf(arquivo, "\n\nSAQUE DE: R$ %d", deposit_qtd);
        fclose(arquivo);
    }

    return 0;
}
#endif