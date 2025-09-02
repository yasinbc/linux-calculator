#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "add.h"
#include "subtract.h"
#include "multiply.h"
#include "divide.h"

void clear_input_buffer(){ 
    int character;
    while( (character = getchar()) != '\n' && character != EOF );
}

//main_v1
int main(void){

    char input_calculator[20];
    char string[256];
    char read_input_to_calculate[20];
    int read_items;
    //unsigned int operand1;

    //operand1 = 0;


    
    //Mantiene el string con la longitud del input en pantalla
    //fgets(string, sizeof(string), stdin);
    string[strlen(string) - 1] = '\0';
    int length = strlen(string);

    //printf("%s", string);
    
    //read_items = sscanf(string, "asdasasd %s\n\n\n", string);

    input_calculator[strlen(input_calculator) -1] = '\0';

    unsigned int value1 = 0;
    unsigned int value2 = 0;
    unsigned int result = 0;
    char operand = '\0';
    printf("Enter your calculation with 2 operands (\'+\', \'-\', \'*\' o \'/\')\n");
    fgets(input_calculator, sizeof(input_calculator), stdin);

    if(sscanf(input_calculator, "%u%c%u", &value1,&operand, &value2) != 3 ){
        printf("Enter an operation with 2 values (e.g.: 12*56)\n");
        return 1;
    }

    //sscanf(input_calculator, "%s", operand1  );
    
    switch(operand){
        case '+':
            result = value1 + value2;
            //printf("%u+%u = %u\n", value1, operand, value2, (value1+value2));
            break;
        case '-':
            result = value1 - value2;
            //printf("%u-%u = %u\n", value1,operand, value2, (value1-value2));
            break;
        case '*':
            result = value1 * value2;
            //printf("%u*%u = %u\n", value1,operand, value2, (value1*value2));
            break;
        case '/':
            if(value2 == 0){
                printf("Result is infinite: %u\n", (value1/value2));
                break;        
            }else{
                result = value1 / value2;
                //printf("%u/%u = %u\n", value1,operand, value2, (value1/value2));
                break;
            }
        default:
            printf("Must enter an operation\n",value1, operand, value2, result);
            return 1;
    }

    printf("result of %u%c%u = %u\n", value1, operand, value2, result);

    /*
    printf("Operand1 = %u\n", value1);
    printf("Result: %u\n", (value1+value2));

    fgets(input_calculator, sizeof(input_calculator), stdin);

    for(int i = 0; i <= sizeof(input_calculator); i++){
        if (input_calculator[0] != '\n'){
            printf("Written\n");
            break;
        }else{
            printf("EMPTY STRING\n");
            break;
        }
    }*/

    return 0;
}


/*
int main(void){
    char user_choice;
    bool should_loop;
    int first_integer, second_integer;
    float first_float, second_float;
    bool shoud_exit;
    
    should_loop = true;
    shoud_exit = false;
    first_integer = 0;
    second_integer = 0;
    first_float = 0.0;
    second_float = 0.0;
    user_choice = '\0';

    //main_v1
    char input_calculator[20];

    
    while(should_loop){
        system("clear");
        
        printf("Choose an option: \n");
        printf("\n");
        printf("Add       (a)\n");
        printf("Subtract  (s)\n");
        printf("Multiply  (m)\n");
        printf("Divide    (d)\n");
        printf("Exit      (e)\n");
        printf("\n");

        user_choice = getchar();
    
        switch(user_choice){
            case 'a':
                printf("Add funtion\n\n");
                clear_input_buffer();
                printf("Enter 2 values to add\n");
                scanf("%i", &first_integer);
                scanf("%i", &second_integer);
                printf("%i + %i = %i\n", first_integer, second_integer, add_integers(first_integer, second_integer) );
                break;
            case 's':
                printf("Subtract function\n\n");
                clear_input_buffer();
                printf("Enter 2 values to subtract\n");
                scanf("%i", &first_integer);
                scanf("%i", &second_integer);
                printf("%i - %i = %i", first_integer, second_integer, subtract_integers(first_integer, second_integer) );
                break;
            case 'm':
                printf("Multiply function\n\n");
                clear_input_buffer();
                printf("Enter 2 values to multiply\n");
                scanf("%i", &first_integer);
                scanf("%i", &second_integer);
                printf("%i * %i = %i", first_integer, second_integer, multiply_integers(first_integer, second_integer) );
                break;
            case 'd':
                printf("Divide function\n\n");
                clear_input_buffer();
                printf("Enter 2 values to divide\n");
                scanf("%f", &first_float);
                scanf("%f", &second_float);
                printf("%f / %f = %f", first_float, second_float, divide_floats(first_float, second_float) );
                break;
            case 'e':
                printf("See you next time\n\n");
                should_loop = false;
                clear_input_buffer();
                shoud_exit = true;
                break;
            default:
                printf("You must choose one of the operations\n");
                clear_input_buffer();
                break;
        }

        if(shoud_exit == false){
            printf("\nPress 'Enter' to continue");
            getchar();
            clear_input_buffer();
        }else{
            break;
        }

    };

    return 0;

}
*/