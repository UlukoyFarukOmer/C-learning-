/*
Number Inspector:
We have two option.
If you choose first option;
We define the number which you are given to us.
Is odd or even?
Is negative or positive?
Is it divide 3 or 5 or both of them?
The program will be answered this questions.


If you choose second option;
The program will be power calculator.
You will give to us two numbers.
Program will calculate power of two numbers.


*/

#include <stdio.h>
int main(void) {
    printf("----Number Inspector----\n");
    printf("Welcome to this program.\n");
    printf("Please make a choice:\n 1\n 2\n");
    int choice;
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Please enter a number:\n");
        int num1;
        scanf("%d",&num1);
        if(num1%2==0)
        {
            printf("This is a even number.\n");
        }
        else
        {
            printf("This is a odd number.\n");
        }
        if(num1>=0)
        {
            printf("It is a positive number.\n");
        }
        else
        {
            printf("It is a negative number.\n");
        }
        if(num1%3==0 && num1%5!=0)
        {
            printf("The number can be divided by 3.\n");
        }
        else if(num1%3==0 && num1%5==0)
        {
            printf("The number can be divided by 3 and 5");
        }
        else if(num1%3!=0 && num1%5==0)
        {
            printf("The number can be divided by 5.\n");
        }
        else
        {
            printf("The number cannot be divided by 3 and 5");
        }



    }
    else if(choice==2)
    {
        printf("Please enter two number:\n");
        int num1,num2;
        scanf("%d %d",&num1,&num2);
        int result=num1;
        if(num2==0)
        {
            result=1;
            printf("The result is %d\n",result);
        }
        else{
            while(num2>1)
            {
                result=result*num1;
                num2=num2-1;
            }
            printf("The result is %d\n",result);
        }
    }
    else
    {
       printf("Invalid selection\n");
    }
    return 0;
}