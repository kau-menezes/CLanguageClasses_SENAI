#include <stdio.h>

#ifndef BANCO_H
#define BANCO_H

int money = 50, withdraw_qtd = 0, deposit_qtd = 0;
char name[20] = "";

FILE * arquivo;

void innit ()
{
    arquivo = fopen("extrato_e_movimentacoes.txt", "a");
    printf("\nDigite o nome do(a) dono(a) da conta: ");
    scanf("%s", name);
    fprintf(arquivo, "\n == EXTRATO E MOVIMENTACOES DO(A) %s ==\n", name);
}

int deposit()
{
    printf("-- REALIZANDO DEPÓSITO --\n Quanto deseja depositar? ");
    scanf("%d", deposit_qtd);
    money = money + deposit_qtd;
    printf("\nDEPÓSITO REALIZADO COM SUCESSO!");
    fprintf(arquivo, "\nDEPÓSITO DE: R$ %d", deposit_qtd);
    
}

int withdraw()
{
    printf("-- REALIZANDO SAQUE --\n Quanto deseja sacar? ");
    scanf("%d", withdraw_qtd);
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
        money = money - withdraw_qtd;
        printf("\nSAQUE REALIZADO COM SUCESSO!");
        fprintf(arquivo, "\nSAQUE DE: R$ %d", deposit_qtd);
    }
}

#endif
