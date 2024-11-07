 /*
  Author : Solomon Gichane
   Reg_no : CT102/G/21749/24
   */
#include <stdio.h>

int main() {
    float hoursWorked, hourlyWage, grossPay, tax, netPay;

    // Input
    printf("Enter hours worked in a week: ");
    scanf("%f", &hoursWorked);
    printf("Enter hourly wage: ");
    scanf("%f", &hourlyWage);

    if (hoursWorked > 40) {
        float overtimeHours = hoursWorked - 40;
        grossPay = (40 * hourlyWage) + (overtimeHours * hourlyWage * 1.5);
    } else {
        grossPay = hoursWorked * hourlyWage;
    }
    if (grossPay < 600) {
        tax = grossPay * 0.15;
    } else {
        tax = (600 * 0.15) + ((grossPay - 600) * 0.20);
    }

    // Calculate netpay
    
    netPay = grossPay - tax;

    // Output
    printf("Gross Pay: $%.2f\n", grossPay);
    printf("Tax: $%.2f\n", tax);
    printf("Net Pay: $%.2f\n", netPay);

    return 0;
}
