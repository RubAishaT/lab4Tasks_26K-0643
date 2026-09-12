#include <stdio.h>
#include <math.h>


int main(){

    float current_total_bill;
    int time_hour;
    float discount;
    float discounted_total;

    printf("Enter the current total bill: ");
    scanf("%f", &current_total_bill);

    printf("Enter the current time as an integer hour(0-23): ");
    scanf("%d", &time_hour);

    if (time_hour >= 11 && time_hour <= 14){
        discount = current_total_bill * 0.10;
        discounted_total = current_total_bill - discount;
        printf("You new total after discount is %.2f",discounted_total);
    }
    else{
        printf("Your total bill is %.2f",current_total_bill);
    }

    return 0;
}