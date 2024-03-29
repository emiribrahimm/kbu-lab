#include <stdio.h>

// 1+x+x^2/2!+x^3/3!
int factorial(int n){
    
    int fac = 1;
    while(n > 0){
        fac *= n;
        n--;
    }

    return fac;
}

int power(int x,int n){

    int power = 1;
    if (n == 0){
        return 1;
    }
    else if (n == 1){
        return x;
    }
    else{
        for(int i = n ; i > 0 ; i--){
            power *= x;
        }
        return power;
    }

}

int main(){
    
    int x,n,total = 0;
    printf("Input your value: ");
    scanf("%d",&x);
    printf("How many series you want?: ");
    scanf("%d",&n);

    for(int i = 0 ; i < n ; i++){
        total += (power(x,i) / factorial(i)); 
    }

    printf("Sum of the series is : %d",total);

}