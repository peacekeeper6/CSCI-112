/******************************************/
/* Programmer: Jun Lim                    */
/* Project: Speed Demon                   */
/* Purpose: Calculating speeding fines    */
/******************************************/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


FILE* fp; //set up file

int main() {
fp = fopen("speed.txt", "w"); //open file, set object to be used

int speedLimit, clockedSpeed, tickets, speedOverLimit; //initialize variables

printf("Enter the speed limit: %d \n", speedLimit); //logic with this might be breaking the program
scanf("%d", &speedLimit); //input speed limit
fprintf(fp, "Enter the speed limit: %d \n", speedLimit);

printf("Enter clocked speed: %d \n", clockedSpeed);
scanf("%d", &clockedSpeed);
fprintf(fp, "Enter clocked speed: %d \n", clockedSpeed);

printf("How many tickets have you received in the last year? %d \n\n", tickets);
scanf("%d", &tickets);
fprintf(fp, "How many tickets have you received in the last year? %d \n\n", tickets);

speedOverLimit = clockedSpeed - speedLimit; //allows use of operators in if statements by declaring as variable

if (speedOverLimit = 0 || speedOverLimit < 0) { //ruling out all possibilities
    printf("You are not fined :)");
    fprintf(fp, "Your are not fined :)");
    printf("Your license is not suspended :)");
    fprintf(fp, "Your license is not suspended :)");
}
if (speedOverLimit > 0 && speedOverLimit < 16) {
    printf("You are fined: $238.00");
    fprintf(fp, "You are fined: $238.00");
    printf("Your license is not suspended");
    fprintf(fp, "Your license is not suspended");
}
if (speedOverLimit > 15 && speedOverLimit < 26) {
    printf("You are fined: $367.00");
    fprintf(fp, "You are fined: $367.00");
    printf("Your license is not suspended");
    fprintf(fp, "Your license is not suspended");  
}
if (speedOverLimit > 25 && speedOverLimit < 101) {
    printf("You are fined: $367.00");
    fprintf(fp, "You are fined: $367.00");
    printf("Your license is suspended for 6 months");
    fprintf(fp, "Your license is suspended for 6 months");  
}
if (speedOverLimit > 100) {
    printf("You are fined: $900.00");
    fprintf(fp, "You are fined: $900.00");
    printf("Your license is suspended for 6 months");
    fprintf(fp, "Your license is suspended for 6 months");  
}

fclose(fp);

printf("Done");
system("Pause");
return 0;
}