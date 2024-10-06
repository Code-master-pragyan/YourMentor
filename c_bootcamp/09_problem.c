/*4.Write a program using switch to create a simple calculator that performs addition, 
subtraction, multiplication, and division based on user input.*/

#include <stdio.h>

int main(){
    int choice;
    int num1, num2;

    printf("num1: \n");
    scanf("%d",&num1);
    printf("num2: \n");
    scanf("%d",&num2);
    printf("Enter your choice (1-4): \n");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            printf("ADDITION: %d + %d = %d",num1,num2,num1+num2);
            break;
        case 2:
            printf("SUBSTRACTION: %d - %d = %d",num1,num2,num1-num2);
            break;
        case 3:
            printf("MULTIPLICATION: %d * %d = %d",num1,num2,num1 * num2);
            break;
        case 4:
            printf("DIVISION: %d / %d = %d",num1,num2,num1/num2);
            break;
        default:
            printf("you entered invalid choice");
        
           
    }

    return 0;
}