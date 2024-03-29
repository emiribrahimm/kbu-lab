#include <stdio.h>

int main(){

    int hundred = 0,fifty = 0,twenty = 0,ten = 0,money;

    while (1)
    {
        printf("Input your money: ");
        scanf("%d",&money);
        if (money%10 == 0){
            break;
        }
        else{
            printf("Your money must be a multiple of 10, enter again.\n");
        }
    }

        hundred += money / 100;
        money %= 100;
        fifty += money / 50;
        money %= 50;
        twenty += money / 20;
        money %= 20;
        ten += money / 10;
        money %= 10;

    printf("Hundred : %d\nFifty: %d\nTwenty: %d\nTen: %d",hundred,fifty,twenty,ten);
    
    


}