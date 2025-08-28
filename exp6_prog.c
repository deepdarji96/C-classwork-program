/*WAP TO EXECUTE A LOOP FROM 10 TO 70 AND DISPLAY THE SUM OF ONLY FIRST 12 ODD NUMBERS*/
#include <stdio.h>

int main() {
    int i, count = 0, sum = 0;

    
    for (i = 10; i <= 70; i++) {
        
        if (i % 2 != 0) {   
            sum = sum + i;  
            count = count + 1; 

            
            if (count == 12) {
                break;
            }
        }
    }

    printf("Sum of first 12 odd numbers between 10 and 70 = %d\n", sum);

    return 0;
}


