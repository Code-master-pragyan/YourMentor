#include <stdio.h>

int main(){
    int num1 = 10;
    int num2 = 15;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    printf("num 1: %d\n",num1);
    printf("num 2: %d\n",num2);
    return 0;
}