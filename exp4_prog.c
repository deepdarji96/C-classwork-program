/* WAP TO ACCEPT A CHARACTER FROM A USER. IF GIVEN UPPER CASE THEN CONVERT INTO LOWERCASE OR ELSE VICE VERSA*/

#include <stdio.h>

int main() {
    char ch;

    
    printf("Enter a character: ");
    scanf("%c", &ch);

    
    if (ch >= 'A' && ch <= 'Z') {
        
        ch = ch + 32;
        printf("Converted character: %c\n", ch);
    }

    if (ch >= 'a' && ch <= 'z') {
       
        ch = ch - 32;
        printf("Converted character: %c\n", ch);
    }

    return 0;
}

