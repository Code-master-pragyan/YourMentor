// Write a program that uses goto to skip negative numbers and print only non-negative numbers entered by the user

#include <stdio.h>

int main(){
    int num;
    input:
    printf("Enter a number: \n");
    scanf("%d",&num);
    if (num < 0)
    {
        goto end;
    }
    printf("You entered %d\n",num);
        goto input;

    end:
      printf("You entered %d,so it skip the program",num);

    return 0;
}