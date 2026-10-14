/*
 * File: integer_analyzer.c
 * Description: Basic CLI Integer Analyzer & Calculator.
 *              Demonstrates arithmetic operators, integer division,
 *              precedence rules, and relational/equality decision making in C.
 */


#include <stdio.h>

int main(void) {
    int num1,num2;
    printf("Welcome to this program.\n");
    printf("Enter two numbers:\n"); //Entering two numbers from user.
    scanf("%d %d",&num1,&num2); //Reading num1 and num2;,

    printf("Lets make some basic calculation:\n");
   
   
    //Under below,I did some basic calculation.   
    printf("\n--- Arithmetic Operations ---\n");
    printf("Sum: %d\n", num1 + num2);
    printf("Difference: %d\n", num1 - num2);
    printf("Product: %d\n", num1 * num2);
    
    
    if(num2!=0)
    {
       
       printf("Result of division %d\n",num1/num2); //division
       printf("Remainder %d\n",num1%num2); //remainder
    }
    if(num2==0)
    {
        printf("Error: Division and modulo by zero are undefined!\n");
    }


    //Under below,I examined relation between num1 and num2.
    printf("-------Comparison Result----------\n");
    if(num1==num2)
    {
        printf("Two numbers are equal %d %d\n",num1,num2);
    }
    if(num1>num2)
    {
        printf("%d is greatar than to %d\n",num1,num2);
    }
     if(num1<num2)
    {
        printf("%d is greatar than to %d\n",num2,num1);
    }
     if(num1>=num2)
    {
        printf("%d is greatar than or equal to %d\n",num1,num2);
    }
     if(num1<=num2)
    {
        printf("%d is greatar than to %d\n",num2,num1);
    }
     if(num1!=num2)
    {
        printf("%d is not equal to %d\n",num1,num2);
    }

    return 0;










}