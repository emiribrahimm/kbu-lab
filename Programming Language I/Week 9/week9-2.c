#include <stdio.h>

int main(){

    int n,factorial = 1;
    
    printf("Input your value: ");
    scanf("%d",&n);

    while(n>0){
        factorial *= n;
        n--;
    }

    printf("Factorial of n is : %d",factorial);
}