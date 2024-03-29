#include <stdio.h>

int main(){

    int number,midterm,final;
    printf("Input your student number: ");
    scanf("%d",&number);
    printf("Input your midterm result: ");
    scanf("%d",&midterm);
    printf("Input your final result: ");
    scanf("%d",&final);

    int total = (midterm * 0.4) + (final * 0.6);
    printf("Student number: %d\nTotal score: %d",number,total);
}