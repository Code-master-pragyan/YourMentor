// 2.Write a program that prints numbers from 1 to 20, skipping multiples of 3.

#include <stdio.h>

int main(){
    int i;
    int n = 20;

    for (i = 1; i <= n; i++){
        if (i % 3 == 0)    //if the number is divisible by 3 then the nummber is also a multiple of 3.
        {
            continue;     //use to skip a perticuler iteration
        }
        printf("%d\n", i);
    }

    return 0;
}