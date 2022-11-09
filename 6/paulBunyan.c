/************************************************/
/* Programmer: Jun Lim                          */
/* Project: Speed Demon                         */
/* Purpose: Calculating Paul Bunyan's logging   */
/************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


FILE* fp; //set up file

int main() {
fp = fopen("paulBunyan.txt", "w"); //open file, set object to be used

int trees, treesPlanted = 0;
int years = 1; 
double cutRate = .87; //initialize variables

printf("Enter the trees: "); 
scanf("%d", &trees); //input trees
fprintf(fp, "Enter the trees: \n");

while (trees > 50) { //all but 50 trees
    years++;
    treesPlanted = trees * cutRate;
    trees = treesPlanted; //for the loop
    printf("Number of remaining trees: %d \n", treesPlanted);
    fprintf(fp, "Number of remaining trees: %d \n", treesPlanted);
}
if (trees <= 50) {
    printf("Number of years is: %d \n", years);
    fprintf(fp, "Number of years is: %d \n", years);
}

fclose(fp);

printf("Done \n");
system("Pause");
return 0;
}