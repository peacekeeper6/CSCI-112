/**********************************************/
/* Programmer: Jun Lim                        */
/* Project: TrainMaker                        */
/* Purpose: Analyzing Train Information       */
/**********************************************/

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct carHappyList { //create linked list
    char model[50];
    double price;
    int miles;
    struct carHappyList* nextCar;
}CarHappy;

//initialize functions
void traverseList(struct carHappyList* start);
void avgPrice(struct carHappyList* start);
void milesTotal(struct carHappyList* start);

int main(){ //tester
    struct carHappyList* car1 = NULL; //creating nodes
    struct carHappyList* car2 = NULL;
    struct carHappyList* car3 = NULL;
    struct carHappyList* car4 = NULL;
    
    car1 = (struct carHappyList*)malloc(sizeof(struct carHappyList)); //allocate memory for each car
    car2 = (struct carHappyList*)malloc(sizeof(struct carHappyList));
    car3 = (struct carHappyList*)malloc(sizeof(struct carHappyList));
    car4 = (struct carHappyList*)malloc(sizeof(struct carHappyList));
    
    strcpy(car1->model,"56 Ford"); //add car values with strcpy
    car1->price = 500.00;
    car1->miles = 23000;
    car1->nextCar = car2;
    
    strcpy(car2->model,"64 Impala");
    car2->price = 1800.00;
    car2->miles = 12000;
    car2->nextCar = car3;
    
    strcpy(car3->model,"57 Ford");
    car3->price = 1400.00;
    car3->miles = 22000;
    car3->nextCar = car4;
    
    strcpy(car4->model,"65 Galaxy");
    car4->price = 2600.00;
    car4->miles = 48000;
    car4->nextCar = NULL;
    
    traverseList(car1);
    milesTotal(car1);
    avgPrice(car1);
    
    system("pause");
    return 0;
}

void traverseList(struct carHappyList* start){
    while(!(start == NULL)) { //while loop to traverse list
        printf("Car: %s\tPrice: %f\tI drove it: %d \n",start->model,start->price,start->miles);
        start = start->nextCar;
    }
}
    
void avgPrice(struct carHappyList* start){
    double priceTotal = 0.0; 

        while(!(start == NULL)) { //traverse through linked list
            priceTotal += start->price;
            start = start->nextCar;;
        }
    printf("The average price was: %lf \n", priceTotal/4); // calculate total/n = number of cars
    }
void milesTotal(struct carHappyList* start){
    int totalMiles = 0;

        while(!(start == NULL)) { //traverse through linked list
            totalMiles += start->miles;
            start = start->nextCar;
            
        }
    printf("\nThe Total Miles: %d\n", totalMiles);
}