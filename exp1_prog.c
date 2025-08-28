/*WAP TO TAKE VALUE OF BASIC SALARY FROM A USER AND COMPUTE THE GROSS SALARY AND NET SALARY OF EMPLOY.*/
#include <stdio.h>

int main() {
    int basic, hra, da, incentive, loan, tax, gross, net;

    printf("Enter Basic Salary: ");
    scanf("%d", &basic);

    incentive = 7000;
    loan = 14000;

    hra = (30 * basic) / 100;
    da = (20 * basic) / 100;
    tax = (10 * basic) / 100;

    gross = basic + hra + da + incentive;
    net = gross - (loan + tax);

    
    printf("Gross Salary = %d\n", gross);
    printf("Net Salary   = %d\n", net);

    return 0;
}
