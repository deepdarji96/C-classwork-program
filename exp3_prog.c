/*WAP TO CALCULATE THE TELEPHONE BILL OF A CUSTOMER AFTER ACCEPTING NO OF CALLS FROM A USER. FIRST 75 CALL ARE FREE NEXT 125 CALL WILL CHARGE 1 RUPEES, NEXT 201 TO 300 WILL CHARGE 2 RUPEES PER CALL NEXT 301 TO 400 WILL RUPESS 4 PER CALL AND AFTER 400 RUPEES 6 PER CALL*/

#include <stdio.h>

int main() {
    int calls, bill = 0;

    printf("Enter number of calls: ");
    scanf("%d", &calls);

    if (calls <= 75) {
        bill = 0;
    }

    if (calls > 75 && calls <= 200) {
        bill = (calls - 75) * 1;
    }

    if (calls > 200 && calls <= 300) {
        bill = (125 * 1) + (calls - 200) * 2;
    }

    if (calls > 300 && calls <= 400) {
        bill = (125 * 1) + (100 * 2) + (calls - 300) * 4;
    }

    if (calls > 400) {
        bill = (125 * 1) + (100 * 2) + (100 * 4) + (calls - 400) * 6;
    }

    printf("Total Telephone Bill = %d\n", bill);

    return 0;
}

