// exercício 1

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

FILE * arquivo;

int j = 0, test_q = 0; 
char name[50];

printf("=== PROGRAMA DE APLICAR PROVAS INICIADO! ===");
printf("\nQuantas provas deseja aplicar?\nR: ");
scanf("%i", &test_q);
printf("\n=== INICIANDO APLICACAO DE PROVAS... ===\n");
while (j<test_q){ 

    printf("\nQual o nome do aluno?\nR: ");
    scanf("%s", name);
    printf("\n=== PROVA DO(A) %s INICIADA! ===\n");
    int i= 0 , correct_ans = 0;
    arquivo = fopen("final_result.txt", "a");
    fprintf(arquivo,"\n\n=== RESULTADOS DA PROVA DO(A): %s ===\n\n", name);

    while(i<5){
        srand(time(NULL)); 
        int random1 = rand() % 100, random2 = rand() % 100;
        int sum = random1 + random2;
        i++;
        int result= 0 ;
        printf("\n%s, digite o resultado de: %d + %d\nR: ", name, random1, random2);
        scanf("%i", &result);

        if (result == sum )
        {
            fprintf(arquivo,"EXERCICIO %i : ACERTOU\n", i);
            correct_ans++;
            printf("VOCE ACERTOU!\n");
        } 
        else 
        {
            fprintf(arquivo,"EXERCICIO %i : ERROU\n", i);
            printf("VOCE ERROU!\n");
        }
    }
    
    fprintf(arquivo,"ACERTOS TOTAIS: %i", correct_ans);
    printf("\n=== PROVA DO %s ENCERRADA! ===\n", name);
    j++;
} 

    fclose(arquivo);
    printf("\nPROGRAMA ENCERRADO!\n");
    return 0;

    }

