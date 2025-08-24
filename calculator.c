#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "add.h"

void v_clear_buffer(){
    int c;
    while( (c = getchar()) != '\n' && c != EOF );
}



int main(void){
    char c_option;
    bool b_menu_loop;
    int i_value1, i_value2;
    float f_value1, f_value2;
    
    b_menu_loop = true;
    i_value1 = 0;
    i_value2 = 0;
    f_value1 = 0.0;
    f_value2 = 0.0;
    

    while(b_menu_loop){
        system("clear");

        printf("Choose an option: \n");
        printf("\n");
        printf("Add       (a)\n");
        printf("Subtract  (s)\n");
        printf("Multiply  (m)\n");
        printf("Divide    (d)\n");
        printf("Exit      (e)\n");
        printf("\n");

        c_option = getchar();
    
        switch(c_option){
            case 'a':
                printf("Add funtion\n\n");
                v_clear_buffer();
                printf("Enter 2 values to add\n");
                scanf("%i", &i_value1);
                scanf("%i", &i_value2);
                printf("%i + %i = %i\n", i_value1, i_value2, /*( i_value1 + i_value2 )*/ i_add(i_value1, i_value2) );
                break;
            case 's':
                printf("Subtract function\n\n");
                v_clear_buffer();
                printf("Enter 2 values to subtract\n");
                scanf("%i", &i_value1);
                scanf("%i", &i_value2);
                printf("%i - %i = %i", i_value1, i_value2, ( i_value1 - i_value2 ) /*subtract(i_value1, i_value2)*/ );
                break;
            case 'm':
                printf("Multiply function\n\n");
                v_clear_buffer();
                printf("Enter 2 values to multiply\n");
                scanf("%i", &i_value1);
                scanf("%i", &i_value2);
                printf("%i * %i = %i", i_value1, i_value2, ( i_value1 * i_value2 ) /*multiply(i_value1, i_value2)*/ );
                break;
            case 'd':
                printf("Divide function\n\n");
                v_clear_buffer();
                printf("Enter 2 values to divide\n");
                scanf("%f", &f_value1);
                scanf("%f", &f_value2);
                printf("%f / %f = %f", f_value1, f_value2, ( f_value1 / f_value2 ) /*divide(f_value1, f_value2)*/ );
                break;
            case 'e':
                printf("See you next time\n\n");
                b_menu_loop = false;
                v_clear_buffer();
                break;
            default:
                printf("You must choose one of the operations\n");
                v_clear_buffer();
                break;
        }


        printf("\nPress 'Enter' to continue");
        getchar();
        v_clear_buffer();

    };

    return 0;

}