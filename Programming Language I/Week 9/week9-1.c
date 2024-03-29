#include <stdio.h>

int main(){
    
    int a,b,c,max;

    printf("Input a value: ");
    scanf("%d",&a);
    printf("Input b value: ");
    scanf("%d",&b);
    printf("Input c value: ");
    scanf("%d",&c);

    max = a;

    if (b > max){
        max = b;
    }
    if (c > max){
        max = c;
    }

    printf("Biggest number is : %d",max);
    
}