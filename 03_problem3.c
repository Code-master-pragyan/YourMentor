// write a program to find the factorial of number using for loop..

#include <stdio.h>

int main()
{
    int product = 1;
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        product *= i;
    }
    printf("the factorial is %d", product);

    return 0;
}
