#include <stdio.h> 

int main(){
    
    int fahreinheit,celcius;

    printf("Input your fahreinheit temperature: ");
    scanf("%d",&fahreinheit);

    celcius = (fahreinheit - 32) * (0.55);

    printf("Your temperature at fahreinheit is : %d at celcius is : %d",fahreinheit,celcius);
}