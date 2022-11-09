/*****************************************/
/* Programmer: Jun Lim                   */
/* Project: A Snail's Pace               */
/* Purpose: Calculating a Snail's Journey*/
/*****************************************/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
    int earthMiles, feetPerMile, daysPerYear, hoursPerDay, feet, years, snail;

earthMiles = 24901;
feetPerMile = 5280;
daysPerYear = 365;
hoursPerDay = 24;

feet = earthMiles * feetPerMile;
years = hoursPerDay * daysPerYear;
snail = feet/years;

printf("It will take Sam %d years to crawl around the world", snail);
}