#include <stdio.h>

int main() {
    int voteA = 0, voteB = 0, voteC = 0, choice;
    char ch;

    printf("Simple Voting System\n");
    do {
        printf("\nVote for your candidate:\n");
        printf("1. Candidate A\n2. Candidate B\n3. Candidate C\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1: voteA++; break;
            case 2: voteB++; break;
            case 3: voteC++; break;
            default: printf("Invalid vote.\n");
        }

        printf("Do you want to continue voting? (y/n): ");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');

    printf("\nFinal Results:\n");
    printf("Candidate A: %d votes\n", voteA);
    printf("Candidate B: %d votes\n", voteB);
    printf("Candidate C: %d votes\n", voteC);

    return 0;
}