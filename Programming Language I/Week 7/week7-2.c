#include <stdio.h>

int main(){

    int A,B,temp;
    printf("Input your A value: ");
    scanf("%d",&A);
    printf("Input your B value: ");
    scanf("%d",&B);
    
    printf("First value of A: %d B: %d\n",A,B);
    temp = A;
    A = B;
    B = temp;
    printf("Last value of A: %d B: %d",A,B);

    

}