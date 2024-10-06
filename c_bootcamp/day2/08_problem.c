
//Write a program that uses break to exit a loop when a user enters a specific number.

#include <stdio.h>

int main() {
    int num;
  
    int target = 50;  // Specific number to exit the loop

     while(1){  // it carries infinite loop upto when the number is not equal to target.
        printf("Enter a number (Enter %d to exit): ", target);
        scanf("%d", &num);

        if (num == target) {
            printf("You entered the target number. Exiting...\n");
            break;  // Exit the loop when the target number is entered
        }

        printf("You entered: %d\n", num); // print if the number is not equal to target number
     }

    return 0;
}
