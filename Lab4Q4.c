#include <stdio.h>
#include <math.h>

int main(){

    int total_cost;
    int crust;

    printf("Enter the current total cost of an order: ");
    scanf("%d", &total_cost);

    printf("1. Regular crust\n");
    printf("2. Thin crust\n");
    printf("3. Stuffed crust\n");

    printf("Enter the crust type: ");
    scanf("%d", &crust);


    switch(crust){

        case 1:
            total_cost = total_cost;
            break;

        case 2:
            total_cost = total_cost + 1;
            break;
        case 3:
            total_cost = total_cost + 2;
            break;

    }

    printf("Your new updated total bill is $%d", total_cost);



    return 0;
}