#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    float num1, num2;
    char opt;
    float result;

    printf("Enter First Number:\t");
    scanf("%f", &num1);
    printf("Enter The Operation That You Want to do (+ - * /):\t");
    scanf("%c", &opt);
    printf("Enter Second Number:\t");
    scanf("%f", &num2);

    switch(opt){
        fflush(stdin);
        case '+':
            result = num1 + num2;
            printf("Output is %.2f", result);
            break;
        fflush(stdin);
        case '-':
            result = num1 - num2;
            printf("Output is %.2f", result);
            break;
        fflush(stdin);
        case '*':
            result = num1 * num2;
            printf("Output is %.2f", result);
            break;
        fflush(stdin);
        case '/':
            result = num1 / num2;
            printf("Output is %.2f", result);
            break;
        fflush(stdin);
        default:
            printf("Invalid Statement\n");
    }
}