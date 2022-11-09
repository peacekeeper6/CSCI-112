/******************************************/
/* Programmer: Jun Lim                    */
/* Project: Here Come the Fudge           */
/* Purpose: Determining containers needed */
/******************************************/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


FILE* fp; //set up file

int main() {
fp = fopen("HereComeTheFudge.txt", "w");

int totalGallons, gallonsToOunces, fiftyFiveGallons, fiftyFiveGallonsRemainder, twentyGallons, twentyGallonsRemainder, tenGallons, tenGallonsRemainder, fiveGallons, fiveGallonsRemainder, oneGallon;

scanf("%d", &totalGallons); //input total gallons
fprintf(fp, "Gallons of fudge ordered: %d \n", totalGallons); //print total gallons to file


gallonsToOunces = totalGallons * 128; //allows for double to not be used

fiftyFiveGallons = gallonsToOunces/(55 * 128); 
fiftyFiveGallonsRemainder = totalGallons % 55; //takes remainder and uses it to calculate for next gallon drum

twentyGallons = fiftyFiveGallonsRemainder/20;
twentyGallonsRemainder = fiftyFiveGallonsRemainder % 20;

tenGallons = twentyGallonsRemainder/10;
tenGallonsRemainder = twentyGallonsRemainder % 10;

fiveGallons = tenGallonsRemainder/5;
oneGallon = tenGallonsRemainder % 5; // any number divided by 1 is the number, so just make this equal to oneGallon


fprintf(fp, "The number of 55 gallon drums is: %d\n", fiftyFiveGallons);

fprintf(fp, "The number of 20 gallon drums is: %d\n", twentyGallons);

fprintf(fp, "The number of 10 gallon drums is: %d\n", tenGallons);

fprintf(fp, "The number of 5 gallon drums is: %d\n", fiveGallons);

fprintf(fp, "The number of 1 gallon drums is: %d\n", oneGallon);

fclose(fp);

printf("Done");
system("Pause");
return 0;
}