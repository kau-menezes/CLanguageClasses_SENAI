#include <stdio.h>

// exercício 1

// int main ()
// {
//     int num = 0, i = 0;
//     printf("=== EX. 1 ===\n");
//     printf("DIGITE UM NÚMERO: ");
//     scanf("%i", &num);

//     for (i = 0; i < num; i++){
//         if (i % 2 == 0){
//             printf("%i\n", i);
//         }
//         else
//         {
//             printf("-!\n");
//         }
//     }
// }

// ------------------------------------------------------------------

// exercício 2

// int main ()
// {
//     int num = 0, sum = 0;
//     printf("=== EX. 2 ===\n");
//     printf("DIGITE UM NÚMERO: ");
//     scanf("%i", &num);

//     for (int i = 0; i <= num; i++){
//         sum = sum + i;
//     }

//     printf("\nA soma de todos os números até o escolhido é de: %d", sum);
// }

// ------------------------------------------------------------------

// exercício 3

int main()
{
    printf("\n=== EX. 1 ===\n");
    int num = 0, mult = 0;
    printf("\nDIGITE UM NÚMERO: ");
    scanf("%d", &num);
    printf("\n");
    printf(" #################\n");
    printf(" # TABUADA DO %d #\n", num);
    printf(" #################\n\n");
    
    for (int i = 1; i <= 10; i++)
    {
        mult = num * i;
        printf("%d VEZES %d = %d\n\n", num, i, mult);
    }
}