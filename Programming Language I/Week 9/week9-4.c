#include <stdio.h>

int main(){

    int n,n_temp,palindrome = 0;

    printf("Input your value: ");
    scanf("%d",&n);

    n_temp = n;

    while (n > 0){
        palindrome *= 10;
        palindrome += (n % 10);
        n /= 10;
    }

    if (n_temp == palindrome){
        printf("Your number is palindrome number.");
    }
    else{
        printf("Your number is NOT palindrome number.");
    }
}