#include <stdio.h>

int main(){

    int temperature;

    printf("Input temperature: ");
    scanf("%d",&temperature);

    if (temperature > 0){
        printf("Weather is above the freezing point.");
    }
    else if (temperature < 0){
        printf("Weather is ınder the freezing point.");
    }
    else{
        printf("Weather is at freezing point.");
    }
}