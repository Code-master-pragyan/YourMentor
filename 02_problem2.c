//Write a program to calculate the grade of student based on thier marks...


#include <stdio.h>

int main(){
    int marks;
    char grade;

    printf("Enter your number: ");
    scanf("%d",&marks);

    if (marks>=90 && marks<=100){
        grade = 'A';
    }else if (marks>=80 && marks<90){
        grade = 'B';
    }else if (marks>=70 && marks<80){
        grade = 'C';
    }else if (marks>=60 && marks<70){
        grade = 'D';
    }else{
        printf("you are fail!!");
    }
    
    printf("you get %d marks and your grade is %c: ",marks,grade);
    
    
    
    return 0;
}