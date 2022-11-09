/*****************************************/
/* Programmer: Jun Lim                   */
/* Project: Keep Your Cool               */
/* Purpose: Calculating Temperatures     */
/*****************************************/

#define _CRT_SECURE_NO_WARNINGS //preset

#include <stdio.h> //include library

int main(void) {
    double celsius, fahrenheit, tempChange; //initialize variables as doubles to allow for decimals and negatives
    int initialAltitude, finalAltitude, elevationChange; //initializing these as int makes final answer cleaner
printf("Enter temperature in Celsius:");
scanf("%lf", &celsius);

fahrenheit = 32 + (celsius * 9/5); //convert input to fahrenheit

printf("Enter initial altitude in feet:");
scanf("%d", &initialAltitude);

printf("Enter final altitude in feet:");
scanf("%d", &finalAltitude);

elevationChange = (finalAltitude - initialAltitude)/1000; //calculate change in elevation
tempChange = fahrenheit - (elevationChange * 5.38); //calculate change in temperature

printf("The temp in fahrenheit at %d feet is: %lf", finalAltitude, tempChange);
return 0; //write to file
}