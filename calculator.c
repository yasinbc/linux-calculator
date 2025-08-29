#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "add.h"
#include "subtract.h"
#include "multiply.h"
#include "divide.h"

void clear_input_buffer(){ 
    int character;
    while( (character = getchar()) != '\n' && character != EOF );
}



int main(void){
    char user_choice;
    bool should_loop;
    int first_integer, second_integer;
    float first_float, second_float;
    
    should_loop = true;
    first_integer = 0;
    second_integer = 0;
    first_float = 0.0;
    second_float = 0.0;
    user_choice = '\0';
    

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
                printf("%i + %i = %i\n", first_integer, second_integer, /*( first_integer + second_integer )*/ add_integers(first_integer, second_integer) );
                break;
            case 's':
                printf("Subtract function\n\n");
                clear_input_buffer();
                printf("Enter 2 values to subtract\n");
                scanf("%i", &first_integer);
                scanf("%i", &second_integer);
                printf("%i - %i = %i", first_integer, second_integer, /*( first_integer - second_integer )*/ subtract_integers(first_integer, second_integer) );
                break;
            case 'm':
                printf("Multiply function\n\n");
                clear_input_buffer();
                printf("Enter 2 values to multiply\n");
                scanf("%i", &first_integer);
                scanf("%i", &second_integer);
                printf("%i * %i = %i", first_integer, second_integer, /*( first_integer * second_integer )*/ multiply_integers(first_integer, second_integer) );
                break;
            case 'd':
                printf("Divide function\n\n");
                clear_input_buffer();
                printf("Enter 2 values to divide\n");
                scanf("%f", &first_float);
                scanf("%f", &second_float);
                printf("%f / %f = %f", first_float, second_float, /*( first_float / second_float )*/ divide_floats(first_float, second_float) );
                break;
            case 'e':
                printf("See you next time\n\n");
                should_loop = false;
                clear_input_buffer();
                break;
            default:
                printf("You must choose one of the operations\n");
                clear_input_buffer();
                break;
        }


        printf("\nPress 'Enter' to continue");
        getchar();
        clear_input_buffer();

    };

    return 0;

}