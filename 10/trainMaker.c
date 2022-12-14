// /**********************************************/
// /* Programmer: Jun Lim                        */
// /* Project: TrainMaker                        */
// /* Purpose: Analyzing Train Information       */
// /**********************************************/

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

FILE *fp;

typedef struct { //set structure trainMaker
char name[50];
char type;
double weight;
int length;
int horsePower;
int numberInTrain;
}train;

//prototype of functions
int readFile(train trainMaker[]);
int calcNumInTrain(train trainMaker[], int makers);
int calcHP(train trainMaker[], int makers);
int calcLength(train trainMaker[], int makers);
int calcLocomotives(train trainMaker[], int makers);
void printTrainInfo(int trainMaker, int totalMakers);
void printTable(train trainMaker[], int totalTrainMakers);
void printFinal(train trainMaker[], int totalMakers);
            
void main() { //initialize
    train trainMaker[100];
    int totalMakers = readFile(trainMaker);
    void printTrainInfo(int trainMaker, int totalMakers);
    void printFinal(train trainMaker[], int totalMakers);
}

int readFile(train trainMaker[]){ //open file for read
    int j;
    j = 0;
    fp = fopen("traindata-1.txt", "r");
    if (fp == NULL)  {
        printf("traindata-1.txt could not be opened for input.\n");
        exit(1);
    }
    else {
        while (!feof(fp)) { //loop through file
            (fscanf(fp, "%s %c %lf %d %d %d\n", trainMaker[j + 1].name,
            &trainMaker[j + 1].type, &trainMaker[j + 1].weight,
            &trainMaker[j + 1].length, &trainMaker[j + 1].horsePower,
            &trainMaker[j + 1].numberInTrain)); //could this not be an alternative to using strsub?
                j++;
        }
    }
    //  fclose(fp);

	// system("pause");
    //return 0;
    return j;
}

int calcNumInTrain(train trainMaker[], int makers) { //calculate total num in train
int numberInTrain = 0;
    for (int j = 0; j < makers; j++) {
        numberInTrain += trainMaker[j].numberInTrain;
    }
    return numberInTrain;
}

int calcHP(train trainMaker[], int makers) { //calculate total horse power
int hpTotal = 0;
    for (int j = 0; j < makers; j++) {
        hpTotal += trainMaker[j].horsePower * trainMaker[j].numberInTrain;
    }
    return hpTotal;
}

int calcLength(train trainMaker[], int makers) { //calculate total length
int lengthTotal = 0;
    for (int j = 0; j < makers; j++) {
        lengthTotal += trainMaker[j].length * trainMaker[j].numberInTrain;
    }
    return lengthTotal;
}

int calcLocomotives(train trainMaker[], int makers) { //calculate total horsepower
int hpTotal = calcHP(trainMaker, makers);
    return hpTotal / 1000; //1000 is locomotives
}

void printTable(train trainMaker[], int totalMakers){ //for the table values
printf("Current Train Cars \n");
    for (int j = 0; j < totalMakers; j++) {
    printf("Type: %s Weight: %c Length: %lf HorsePower: %d Number in Train: %d\n",
    trainMaker[j].name, trainMaker[j].type, trainMaker[j].weight,
    trainMaker[j].length, trainMaker[j].horsePower, trainMaker[j].numberInTrain);
    }
}

void printFinal(train trainMaker[], int totalMakers) { //for the total values
    void printTrainInfo(int trainMaker, int totalMakers);
    int carTotal = calcNumInTrain(trainMaker, totalMakers); //set total values for print
    int lengthTotal = calcLength(trainMaker, totalMakers);
    int hpTotal = calcHP(trainMaker, totalMakers);
    int locomotives = calcLocomotives(trainMaker, totalMakers);
    
    printf("There are %d cars in the train\n", carTotal);
    printf("The total length of the train is: %d\n", lengthTotal);
    printf("The total horsepower needed to pull this train is: %d\n", hpTotal);
    printf("The number of engines needed to pull the train is: %d\n", locomotives);
}