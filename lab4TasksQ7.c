#include <stdio.h>
#include <math.h>


int main(){

    float total_bill;
    char StudentID_Status;



    printf("Enter total bill: ");
    scanf("%f", &total_bill);

    printf("Is StudentID status Present(Y/N): " );
    scanf("%s", &StudentID_Status);

    if(StudentID_Status == 'Y'){
        total_bill = total_bill - 2.00;
    }

    if (total_bill < 0){
        total_bill = 0.00;
    }



    return 0;
}