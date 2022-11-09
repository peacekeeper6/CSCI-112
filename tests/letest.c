#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
int main() {
    printf("%-15s %-15s %-15s %-15s\n", "WAGER", "WON", "LOSS", "STASH");
    printf("%-15s %-15s %-15s %-15s\n", "------", "-----", "----", "-----");
    double bet, payoff, stash, amtWon, amtLost, startingStash, endingStash; 
    startingStash = 2000.00;
    printf("%-15s %-15s %-15s %-15s\n", "Starting Stash", "", "", "2000.00");
    startingStash = 2000.00;
    stash = startingStash + 500.00;
    printf("%-15s %-15s %-15s %-15s\n", "Won!", "500.00", "", "2500.00");
    stash += 100.00;
    printf("%-15s %-15s %-15s %-15s\n", "Won!", "100.00", "", "600.00");
    stash += 600.00;
    printf("%-15s %-15s %-15s %-15s\n", "Won!", "600.00", "", "1200.00");
    stash += 50.00;
    printf("%-15s %-15s %-15s %-15s\n", "Won!", "50.00", "", "950.00");
    stash += 50.00;
    printf("%-15s %-15s %-15s %-15s\n", "Won!", "50.00", "", "1000.00");
    return 0;
}

    stash = 2000.00; initialize stash, used to model logic of wins

