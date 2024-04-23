#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char * name_s;
    char * breed_s;
    int age_s;
    float weight_s;
} myPets;

int form_pets(myPets * array_p, char * name_p, char * breed_p, int age_p, int weight_p, int i_p)
{
    
    array_p[i_p].name_s = malloc(strlen(name_p) * sizeof(char) + 1);
    strcpy(array_p[i_p].name_s, name_p);
    
    array_p[i_p].breed_s = malloc(strlen(breed_p) * sizeof(char) + 1);
    strcpy(array_p[i_p].breed_s, breed_p);

    array_p[i_p].age_s = age_p;

    array_p[i_p].weight_s = weight_p;

    // libera espaço
    free(array_p[i_p].name_s);
    free(array_p[i_p].breed_s);

    return 0;
}

int write_file(myPets * array_p, FILE * file_p, int i_p)
{
    
    fprintf(file_p, "\n=== PET %d ===\n\n", i_p + 1);
    fprintf(file_p, "Nome: %s\n", array_p[i_p].name_s);
    fprintf(file_p, "Raça: %s\n", array_p[i_p].breed_s);
    fprintf(file_p, "Idade: %d\n", array_p[i_p].age_s);
    fprintf(file_p, "Peso: %f\n", array_p[i_p].weight_s);

}


int main()
{
    int amount = 0, i = 0, age = 0;
    float weight = 0;
    char *pet_name = malloc(50);
    char *pet_breed = malloc(50);


    myPets pet1;

    FILE * arquivo = fopen("arquivo.txt", "w");

    printf("\n=== SISTEMA DE REGISTRO DE PETS ===\n");
    fprintf(arquivo, "\n=== SISTEMA DE REGISTRO DE PETS ===\n");

    // decide o tamanho do loop
    printf("\nDigite o número de pets que deseja cadastrar: ");
    scanf( "%d", &amount);

    // cria um array de myPets
    myPets* pets_array = malloc(amount * sizeof(myPets));

    while (i < amount)
    {
        printf("\n=== PET n°%d ===\n", i + 1);
        
        printf("\n");
        printf("Digite o nome do %do Pet: ", i + 1);
        scanf(" %s", pet_name);

        printf("\n");
        printf("Qual a raça do seu pet? ");
        scanf(" %s", pet_breed);

        printf("\n");
        printf("Qual a idade do seu pet? ");
        scanf( "%d", &age);

        printf("\n");
        printf("Qual o peso, em quilogramas, do seu pet? ");
        scanf(" %f", &weight);

        // cria um novo myPets na lista pets_array
        form_pets(pets_array, pet_name, pet_breed, age, weight, i);

        // escreve no arquivo criado
        write_file(pets_array, arquivo, i);

        i++;

    }
    
    fclose(arquivo);
    free(pets_array);
    return 0;
    
}

