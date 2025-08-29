#include <stdio.h>
#include "divide.h"

float divide_floats(float operand1, float operand2){
    if(operand2 != 0){
        return operand1 / operand2;
    }else{
        printf("Error: can't divide by 0\n");
        return 0;
    }
}