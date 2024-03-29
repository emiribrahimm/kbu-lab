#include <stdio.h>

int main(){

    int feet;
    float cm;

    printf("Input your feet value: ");
    scanf("%d",&feet);

    cm = 30.48*feet;
    printf("Your value at cm is : %.2f",cm);
}