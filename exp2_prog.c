/*WAP TO CALCULATE SI,PRINCIPLE AND TIME FROM USER AND RATE IS FIX TO 8% */
#include <stdio.h>

int main() {
    int P, T, R = 8, SI;

    printf("Enter Principal: ");
    scanf("%d", &P);

    printf("Enter Time (in years): ");
    scanf("%d", &T);

    SI = (P * R * T) / 100;

    printf("Simple Interest = %d\n", SI);

    return 0;
}

