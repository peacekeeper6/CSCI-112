/******************************************/
/* Programmer: Jun Lim                    */
/* Project: Cars For Sale                 */
/* Purpose: Calculating Classic Car Values*/
/******************************************/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

char car[20] = "Car";
char valueInitial[20] = "2004 Value";
char valueFinal[20] = "2008 Value";

char nova[20] = "Nova"; //alternative to using array
char challenger[20] = "Challenger";
char cuda[20] = "Cuda";
char mustang[20] = "Mustang";
char GTO[20] = "GTO";

double nova04, challenger04, cuda04, mustang04, GTO04, nova08, challenger08, cuda08, mustang08, GTO08; //initialized as double to allow for cent calculation
nova04 = 2500.00; //initialize 2004 values
challenger04 = 44200.00;
cuda04 = 7400.00;
mustang04 = 55000.00;
GTO04 = 29000.00;

nova08 = nova04 * 3.35; //calculate and assign 2008 values
challenger08 = challenger04 * 3.02;
cuda08 = cuda04 * 2.91;
mustang08 = mustang04 * 2.01;
GTO08 = GTO04 * 2.51;


printf("%-15s %-15s %-15s\n", car, valueInitial, valueFinal);
printf("------------------------------------------\n"); //styling for table
printf("%-15s | %-15f | %-15f\n", nova, nova04, nova08);
printf("%-15s | %-15f | %-15f\n", challenger, challenger04, challenger08);
printf("%-15s | %-15f | %-15f\n", cuda, cuda04, cuda08);
printf("%-15s | %-15f | %-15f\n", mustang, mustang04, mustang08);
printf("%-15s | %-15f | %-15f\n", GTO, GTO04, GTO08);

return 0;
}