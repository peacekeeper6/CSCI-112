/**********************************************/
/* Programmer: Jun Lim                        */
/* Project: Where the Rubber Meets the Road   */
/* Purpose: Interpreting car tire markings    */
/**********************************************/

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
char intendedUseValidity [] = '.';
char tireWidthValidity [] = '.';
char ratioValidity [] = '.';
char tireConstructionValidity [] = '.';
char rimDiameterValidity [] = '.';
char loadIndexValidity [] = '.';
char speedValidity [] = '.';
char tireCodeValidity [] = '.';

// char intendedUseValidity, tireWidthValidity, ratioValidity, 
// tireConstructionValidity, rimDiameterValidity, loadIndexValidity, 
// speedValidity, tireCodeValidity;

int i;

char *gets(char *userInput);
char tireCode [100]; //initialize tire code

printf("Enter tire code: ");
gets(tireCode);

char intendedUse[2];
strncpy(intendedUse, &tireCode[0], 1); //parse array

char tireWidthChar[4];
strncpy(tireWidthChar, &tireCode[1], 3);

char ratioChar[3];
strncpy(ratioChar, &tireCode[5], 2);

char tireConstruction[2];
strncpy(tireConstruction, &tireCode[7], 1);

char rimDiameterChar[3];
strncpy(rimDiameterChar, &tireCode[8], 2);

char loadIndexChar[3];
strncpy(loadIndexChar, &tireCode[11], 2);

char speed[2];
strncpy(speed, &tireCode[13], 1);

int tireWidth = atoi(tireWidthChar); //atoi
int ratio = atoi(ratioChar);
int rimDiameter = atoi(rimDiameterChar);
int loadIndex = atoi(loadIndexChar);

char *intendedUseString, *tireConstructionString1, *tireConstructionString2, 
*speedString1, *speedString2, *speedString3, *speedString4, *speedString5; //initialize strncpy pointers

strncpy(intendedUseString, "P", 2);
strncpy(tireConstructionString1, "R", 2);
strncpy(tireConstructionString2, "B", 2);
strncpy(speedString1, "S", 2);
strncpy(speedString2, "T", 2);
strncpy(speedString3, "U", 2);
strncpy(speedString4, "H", 2);
strncpy(speedString5, "V", 2);

if (strcmp(intendedUse, intendedUseString) != 0) { //strcmp to see if values are valid
    intendedUseValidity = "not good";
}
else {
    intendedUseValidity = "good";
}

if (tireWidth >= 155 && tireWidth <= 305) { //compare int to see if values are valid
    tireWidthValidity = "good";
}
else {
    tireWidthValidity = "bad";
}

if (ratio >= 30 && ratio <= 80) {
    ratioValidity = "good";
}
else {
    ratioValidity = "bad";
}

if (rimDiameter >= 14 && rimDiameter <= 22) {
    rimDiameterValidity = "good";
}
else {
    rimDiameterValidity = "bad";
}

if (loadIndex >= 50 && loadIndex <= 99) {
    loadIndexValidity = "good";
}
else {
    loadIndexValidity = "bad";
}

if (strcmp(tireConstruction, tireConstructionString1) != 0) {
    intendedUseValidity = "not good";
    if (strcmp(tireConstruction, tireConstructionString2) != 0) { 
        intendedUseValidity = "not good";
    }
    else {
        intendedUseValidity = "good";
    }
}
else {
    intendedUseValidity = "good";
}

if (strcmp(speed, speedString1) != 0) {
    speedValidity = "not good";
    if (strcmp(speed, speedString2) != 0) { 
        speedValidity = "not good";
        if (strcmp(speed, speedString3) != 0) { 
            speedValidity = "not good";
            if (strcmp(speed, speedString4) != 0) { 
                speedValidity = "not good";
                if (strcmp(speed, speedString5) != 0) { 
                    speedValidity = "not good";
                }
                else {
                    speedValidity = "good";
                }
            }
            else {
                speedValidity = "good";
            }
        }
        else {
            speedValidity = "good";
        }
    }
    else {
        speedValidity = "good";
    }
}
else {
    speedValidity = "good";
}


// i = 0;
// printf("Intended use of car: ");
// gets(userInput[i]);

// // scanf("%100s,", userInput[i]);
// ++i;
// printf("Tire width in millimeters: ");
// gets(userInput[i]);

// // scanf("%100s,", userInput[i]);
// ++i;
// printf("Tire sidewall height ratio to width: ");
// gets(userInput[i]);

// // scanf("%100s,", userInput[i]);
// ++i;
// printf("Tire construction method: ");
// gets(userInput[i]);

// // scanf("%100s,", userInput[i]);
// ++i;
// printf("Rim diameter in inches: ");
// gets(userInput[i]);

// // scanf("%100s,", userInput[i]);
// ++i;
// printf("Load Index: ");
// gets(userInput[i]);

// // scanf("%100s,", userInput[i]);
// ++i;
// printf("Speed rating: ");
// gets(userInput[i]);

// i = 0;
// // int init_size = strlen(userInput[0]);

// char firstElement[100] = '\0';
//     strcpy(userInput[i], firstElement);



// char space[] = " ";

// char *ptr = strtok(userInput[0], space);

// while(ptr != NULL)
// {
// 	// printf("'%s'\n", ptr);
// 	ptr = strtok(NULL, space);
// }

// for (i = 0; i < 7; i++)
// 	{
//         if (i == 0) {
//             intendedUse = *userInput[i];
//         }
//         else {
//             if (i == 1) {
//             tireWidth = *userInput[i];
//         }
//             else {
//                 if (i == 2) {
//                 ratio = *userInput[i];
//                 }
//                 else {
//                     if (i == 3) {
//                     tireConstruction = *userInput[i];
//                     }
//                     else {
//                         if (i == 4) {
//                             rimDiameter = *userInput[i];
//                         }
//                         else {
//                             if (i == 5) {
//                             loadIndex = *userInput[i];
//                             }
//                             else {
//                                 speed = *userInput[i];
//                             }
//                         }
//                     }   
//                 }
//             }
//         }
        // if (i = 1) {
        //     tireWidth = userInput[i];
        // }
        // else if (i = 2) {
        //     ratio = userInput[i];
        // }
        // else if (i = 3) {
        //     tireConstruction = userInput[i];
        // }
        // else if (i = 4) {
        //     rimDiameter = userInput[i];
        // }
        // else if (i = 5) {
        //     loadIndex = userInput[i];
        // }
        // else {
        //     speed = userInput[i];
        // }
		// printf("%s ", userInput[i]);
// scanf("%100s,", userInput[i]);

// gets(userInput[i]);
// gets(*userInput);
// printf("Tire sidewall height ratio to width: \n");
// gets(userInput);
// printf("Tire construction method: \n");
// gets(userInput);
// printf("Rim diameter in inches: \n");
// gets(userInput);
// printf("Load Index: \n");
// gets(userInput);
// printf("Speed rating: \n\n");
// gets(userInput);

// printf("Your thing is %s", userInput[1]);
// printf("Your thing is %s", userInput[2]);

// printf("You entered %s", userInput);

// char str[20];   
//    printf("Enter the string? ");  
//    fgets(str, 20, stdin);   
//    printf("%s", str);   


//  int array[20];
//     int i;
//     printf("Enter value to be stored in array> ");
//     for (i=0;i<20;i++){
//         //printf("Enter value to be stored in array[%d]> ",i);
//         scanf("%d,",&(array[i]));
//         //scanf("%d,",(array+i));
//     }

printf("Passenger Car value is %s\n", intendedUseValidity);
printf("Width of tire is %s\n", tireWidthValidity);
printf("Ratio of height to width (aspect ratio) is %s\n", ratioValidity);
printf("Tire construction is %s\n", tireConstructionValidity);
printf("Rim diameter is %s\n", rimDiameterValidity);
printf("Load Index is %s\n", loadIndexValidity);
printf("Speed rating is %s\n\n", speedValidity); //print if valid or not

printf("TIre code is %s", tireCodeValidity);
}
