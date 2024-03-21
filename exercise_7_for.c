#include <stdio.h>
#include <string.h>

int main() 
{
    char num_char[50] = "";

    printf("\nDigite um número: ");
    scanf("%s", num_char);

    printf("\nDígitos do número: %zu", strlen(num_char));

}
