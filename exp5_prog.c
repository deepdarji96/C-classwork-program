/* WAP TO ACCEPT TWO NUMBERS FROM A USER AND DISPLAY ALL THE ODD NUMBERS BTW THAT RANGE*/

#include <stdio.h>

int main() {
    int start, end, i;

    
    printf("Enter two numbers: ");
    scanf("%d %d", &start, &end);

    printf("Odd numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        if (i % 2 != 0) {   
            printf("%d ", i);
        }
    }

    return 0;
}

