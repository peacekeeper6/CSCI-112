
/**********************************************/
/* Programmer: Jun Lim                        */
/* Project: Bet On It                         */
/* Purpose: Keeping track of luck on wagers   */
/**********************************************/


#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

FILE* csit; //set up file
FILE* fp; //set up file

void printReportHeader() {
    fp = fopen("wagers.txt", "r"); //open file for read - input, set object to be used
    csit = fopen("csit.txt", "w"); //open file for write - output, set object to be used  
    printf("%-15s %-15s %-15s %-15s\n", "WAGER", "WON", "LOSS", "STASH");
    fprintf(csit, "%-15s %-15s %-15s %-15s\n", "WAGER", "WON", "LOSS", "STASH");
    printf("%-15s %-15s %-15s %-15s\n", "------", "-----", "----", "-----");
    fprintf(csit, "%-15s %-15s %-15s %-15s\n", "------", "-----", "----", "-----");
    return;
}

void initialStash(double bet, double *stash, double *payoff, double *startingStash) {
    *startingStash = 2000.00; //initial value of stash
    *stash = *startingStash; //stash is being changed
    printf("%-15s %-15s %-15s %-15lf\n", "Starting Stash", "", "", bet);
    fprintf(csit, "%-15s %-15s %-15s %-15lf\n", "Starting Stash", "", "", bet);
    return;
}

void addToStash(double bet, double *stash, double *payoff, int *numWon, double *amtWon){
    *stash += bet; //if win, add bet to stash
    *amtWon += bet; //if win, add bet to amtWon total
    ++*numWon; //if win, increment numWon 
    printf("%-15s %-15lf %-15s %-15lf\n", "Win!", bet, "", *stash);
    fprintf(csit, "%-15s %-15lf %-15s %-15lf\n", "Win!", bet, "", *stash);
    *payoff += bet * 0.1; //payoff of wins
    return;
}
void lossFromStash(double bet, double *stash, double *payoff, int *numLost, double *amtLost) {
    *stash -= bet; //if loss, subtract bet from stash
    *amtLost += bet; //if loss, add bet to amtLost total
    ++*numLost; //if loss, increment numLost
    printf("%-15s %-15s %-15lf %-15lf\n", "Loss!", "", bet, *stash);
    fprintf(csit, "%-15s %-15s %-15lf %-15lf\n", "Loss!", "", bet, *stash);
    *payoff += bet * 0.05; //payoff of losses
    return;
}
void printReportFooter(int numWon, double amtWon, int numLost, double amtLost, double startingStash, double payoff,  
 double endingStash) {
    printf("Total number Wins: %d\n", numWon);
    fprintf(csit, "Total number Wins: %d\n", numWon);
    printf("Total amount Wins: %lf\n", amtWon);
    fprintf(csit, "Total amount Wins: %lf\n", amtWon);
    printf("Total number Losses: %d\n", numLost);
    fprintf(csit, "Total number Losses: %d\n", numLost);
    printf("Total amount Losses: %lf\n\n", amtLost);
    fprintf(csit, "Total amount Losses: %lf\n\n", amtLost);

    printf("Starting Stash: %lf\n", startingStash);
    fprintf(csit, "Starting Stash: %lf\n", startingStash);
    printf("Total payoff charge: %lf\n", payoff);
    fprintf(csit, "Total payoff charge: %lf\n", payoff);
    printf("Closing Stash: %lf\n", endingStash);
    fprintf(csit, "Closing Stash: %lf\n", endingStash);
    return;
}

int main()  
{ 
   // set up variables 
   char code; 
   double bet, payoff, stash, amtWon, amtLost, startingStash, endingStash; 
   int numWon, numLost; 
    
   // test and open input file and output file. 
   if (!(fp = fopen("wagers.txt", "r"))) { 
    printf("wagers.txt could not be opened for input."); 
    exit(1); } 
   if (!(csit = fopen("csit.txt", "w"))) { 
    printf("csit.txt could not be opened for output."); 
    exit(1); } 
    
   //initialize variable values 
   bet = payoff = stash = amtWon = amtLost = startingStash = endingStash = 0.0; 
   numWon = numLost = 0; 
    
   // print out report header 
   printReportHeader(); 
 
   // loop through file 
   while (!feof(fp)) { 
    fscanf(fp, "%c %lf\n", &code, &bet); 
    if (code == 'D') // initial deposit 
     initialStash(bet, &stash, &payoff, &startingStash); 
    else if (code == 'W') // a win 
     addToStash(bet, &stash, &payoff, &numWon, &amtWon); 
    else // must have been a loss 
     lossFromStash(bet, &stash, &payoff, &numLost, &amtLost); } 
 
   // final calculation of profit or loss 
   endingStash = stash - payoff; 
    
   // print out summary 
   printReportFooter(numWon, amtWon, numLost, amtLost, startingStash, payoff,  
 endingStash); 
    
   // close data and output file 
   fclose(csit); 
   fclose(fp); 
   return 0; 
}
