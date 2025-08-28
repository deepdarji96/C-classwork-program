/* WAP TO CREATE A VOTING MACHINE FOR 3 CANDIDATES AND DISPLAY THE PERSON WITH HIGHEST VOTES*/
#include <stdio.h>

int main() {
    int c1 = 0, c2 = 0, c3 = 0; 
    int vote, i;

  
    for (i = 1; i <= 5; i++) {
        printf("Voter %d, enter your vote (1, 2, or 3): ", i);
        scanf("%d", &vote);

        if (vote == 1) {
            c1 = c1 + 1;
        }
        if (vote == 2) {
            c2 = c2 + 1;
        }
        if (vote == 3) {
            c3 = c3 + 1;
        }
    }

    
    printf("\nVotes for Candidate 1 = %d", c1);
    printf("\nVotes for Candidate 2 = %d", c2);
    printf("\nVotes for Candidate 3 = %d\n", c3);

    
    if (c1 > c2 && c1 > c3) {
        printf("Winner is Candidate 1\n");
    }
    if (c2 > c1 && c2 > c3) {
        printf("Winner is Candidate 2\n");
    }
    if (c3 > c1 && c3 > c2) {
        printf("Winner is Candidate 3\n");
    }

    return 0;
}


