#include <stdio.h>

int main(){

    int N;

    printf("Input your value: ");
    scanf("%d",&N);

    if (N % 2 == 0){
        printf("Your value is even.");
    }
    else{
        printf("Your value is odd.");
    }
}