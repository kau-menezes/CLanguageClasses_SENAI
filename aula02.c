// exercicio 1 

// #include <stdio.h>
// int main(){
//     float primeiraNota = 5, segundaNota = 8, terceiraNota = 4;
//     float media = (primeiraNota*2 + segundaNota*3 + terceiraNota*5) / 10;
//     printf("%i", media);
//     return 0;
// }

// exercico 2

// #include <stdio.h>
// int main(){
//     float grauCelsius = 40;
//     float grauFahrenheit = (9*grauCelsius / 5) + 32;
//     float Kelvin = (grauFahrenheit - 32) / 1.8 + 273.15;
//     printf("%.1f Graus Celsius viram %.1f Graus Fahrenheit, e %.1f Graus Fahrenheit viram %.1f Kelvin.", grauCelsius, grauFahrenheit, grauFahrenheit, Kelvin);
//     return 0;
// }

// exercicio 3

// #include <stdio.h>
// int main (){
//     int num = 6;
//     int module = num%2;
//     if (num%2 == 1) {
//         printf("%i eh IMPAR", num);
//     } else {
//         printf("%i eh PAR", num);
//     }
// }

// ------------------------------------------------------------------------------------------------------

// exercício 1

// #include <stdio.h>

// int main(){
//     char name[50], surname[50], dateOfBirth[9], cpf[12] = "";
//     printf("Insira seu nome: ");
//     scanf("%s", &name);
//     printf("Insira seu sobrenome: ");
//     scanf("%s", &surname);
//     printf("Insira sua data de nascimento no formato DDMMAAAA: ");
//     scanf("%s", &dateOfBirth);
//     printf("Insira seu CPF: ");
//     scanf("%s", &cpf);
//     printf("=== CERTIFICADO DE CONCLUSAO DE CURSO ===\n");
//     printf("O(a) aluno(a): %s %s, nascido(a) no dia %s, portador(a) do CPF: %s concluiu com sucesso a aprendizagem da TDS.", name, surname, dateOfBirth, cpf);
//     return 0;

// }

// exercício 2

#include <stdio.h>

int main(){
    int num1 = 0;
    int num2 = 0;

    printf("Digite o primeiro numero: ");
    scanf("%i", &num1);
    printf("Digite o segundo numero: ");
    scanf("%i", &num2);

    int not_num1 = ~num1; // NOT

    int num1_and_num2 = num1&&num2; // AND

    int num1_or_num2 = num1|num2; // OR

    printf("\n=== OPERADORES! ===\n\n");

    printf("\nNOT NUMERO 1 : %i\n\n", not_num1);
    printf("NUMERO 1 AND NUMERO 2 : %i\n\n", num1_and_num2);
    printf("NUMERO 1 OR NUMERO 2 : %i\n\n", num1_or_num2);
    
    printf("\n=== SHIFT! ===\n\n");

    int l_shift = 0;
    int r_shift = 0;

    printf("Quantas casas deseja deslocar para a esquerda no numero 1? ");
    scanf("%i", &l_shift);

    int num1_l_shift = num1 << l_shift;
    printf("\n\nL SHIFT NUMERO 1 : %i\n\n", num1_l_shift);

    printf("Quantas casas deseja deslocar para a direita no numero 2? ");
    scanf("%i", &r_shift);

    int num2_r_shift = num2 >> r_shift;
    printf("\n\nR SHIFT NUMERO 2: %i", num2_r_shift);


    return 0;

}

// exercício 2

// #include <stdio.h>

// int main() {
   
//     int a = 10; // Representação binária: 00000000 00000000 00000000 00001010
//     int b = 5; //  Representação binária: 00000000 00000000 00000000 00000101

//     // Operador NOT (~)
//     int not_a = ~a; // Representação binária: 11111111 11111111 11111111 11110101

//     // Operador AND (&) - COMPARA AS DUAS VARIÁVEIS
//     int and_result = a & b; // Resultado: 00000000 00000000 00000000 00000000

//     // Operador XOR (^)
//     int xor_result = a ^ b; // Resultado: 00000000 00000000 00000000 00001111

//     // Operador OR (|)
//     int or_result = a | b; // Resultado: 00000000 00000000 00000000 00001111

//     // Operador Shift Left (<<)
//     int shift_left_result = a << 1; // Resultado: 00000000 00000000 00000000 00010100

//     // Operador Shift Right (>>)
//     int shift_right_result = a >> 1; // Resultado: 00000000 00000000 00000000 00000101

//     // Exibindo resultados
//     printf("NOT (~a): %d\n", not_a);
//     printf("AND (a & b): %d\n", and_result);
//     printf("XOR (a ^ b): %d\n", xor_result);
//     printf("OR (a | b): %d\n", or_result);
//     printf("Shift Left (a << 1): %d\n", shift_left_result);
//     printf("Shift Right (a >> 1): %d\n", shift_right_result);

//     return 0;
// }