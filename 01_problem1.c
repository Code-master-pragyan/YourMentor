//Write a program that asks the user to input a year and cheaks if it is a leap  year..

#include <stdio.h>

int main(){
    int year;
    printf("Enter the year: \n");
    scanf("%d",&year);
    
    if((year%4==0 && year%100!=0)|| year%400==0){
        printf("%d is the leap-year",year);
    }else{
        printf("%d is not a leap-year",year);
    }
    return 0 ;
}