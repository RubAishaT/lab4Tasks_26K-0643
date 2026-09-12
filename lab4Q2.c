#include <stdio.h>



int main(){

    int quantity;
    int total;

    printf("Enter the number of pizzas you want: ");
    scanf("%d", &quantity);

    if (quantity > 1){
        printf("Check our multi-pizza deals.");
    }
    else{
        total = 8;
        printf("Your total is $%d",total);
    }


    return 0;
}