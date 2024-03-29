#include <stdio.h>
#define pi 3

int main(){

    int choice,radius;

    printf("Input radius of your circle: ");
    scanf("%d",&radius);
    printf("What you want to calculate?\n(1: Circumference - 2: Area ): ");
    scanf("%d",&choice);

    if (choice == 1){
        printf("Circumference of your circle is : %d",2*pi*radius);
    }
    else if (choice == 2){
        printf("Area of circle is : %d",pi*radius*radius);
    }
    else{
        printf("Wrong Entry");
    }

}