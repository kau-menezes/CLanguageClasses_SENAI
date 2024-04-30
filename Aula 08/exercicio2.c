#include <stdio.h>

void main ()
{
    // declara as variáveis
    int var = 8;
    int * ptr = &var;

    // printa por motivos didáticos
    printf("%d\n", var);
    printf("%d\n", ptr);
    printf("%d\n", &var);    
    printf("%d\n", &ptr);    
    printf("%d\n", *ptr);    

    // atribui ao ponteiro desreferenciado o novo valor
    *ptr = 11;

    // printa por motivos didáticos
    printf("%d\n", var);


}
