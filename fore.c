/**********************************************/
/* Programmer: Jun Lim                        */
/* Project: Fore!                             */
/* Purpose: Drawing conclusions from golf hits*/
/**********************************************/


#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE* fp; //set up file

void main() {
    fp = fopen("fore.txt", "w"); //open file, set object to be used

    int scoreSum, parSum, pars, birdies, bogeys; //initialize totals
    parSum = scoreSum = pars = birdies = bogeys = 0;

    int hits[9] = {4, 5, 4, 5, 4, 3, 4, 3, 4}; //hits array
    const char *par[] = {"Par", "Birdie!", "Bogey!", "Par", 
    "Birdie!", "Par", "Bogey!", "Par", "Bogey!"}; //string array for type of strokes
    int scores[9] = {4, 4, 5, 5, 3, 3, 5, 3, 5}; //scores array
    printf("%7s", "--------- Golf Score Calculator ---------\n");
    fprintf(fp, "%7s", "--------- Golf Score Calculator ---------\n");
    for (int i = 0; i < 9; ++i) {
    printf("The score on hole # %d was: %d   Par is: %d - %s\n", i + 1, scores[i], hits[i], par[i]);
    fprintf(fp, "The score on hole # %d was: %d   Par is: %d - %s\n", i + 1, scores[i], hits[i], par[i]);
    if (scores[i] == hits[i]) { //if par
        ++pars;
    }
    else {
        if (scores[i] < hits[i]) { //else has to be birdie or bogey
        ++birdies;
        }
        else { //else has to be bogey
        ++bogeys;
        }
    }
    parSum += hits[i];
    scoreSum += scores[i];
    }
    printf("\nPar is: %d - total score was: %d\n", parSum, scoreSum);
    fprintf(fp, "\nPar is: %d - total score was: %d\n", parSum, scoreSum);
    printf("\nNumber of pars: %d", pars);
    fprintf(fp, "\nNumber of pars: %d", pars);
    printf("\nNumber of birdies: %d", birdies);
    fprintf(fp, "\nNumber of birdies: %d", birdies);
    printf("\nNumber of bogeys: %d", bogeys);
    fprintf(fp, "\nNumber of bogeys: %d", bogeys);

    fclose(fp); 

}