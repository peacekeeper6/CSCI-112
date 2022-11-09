// #include <stdlib.h>
// printf("%-15s WAGER %-15s WON %-15s LOSS %-15s STASH\n");
//     printf("%-15s ------ %-15s ----- %-15s ---- %-15s -----");
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

void main() {
char *strings[]={ "one", "two", "three"};

int i=0;
    while(strings[i]) {
    printf("%s\n", strings[i]);
    //do something
    i++;
    };
    
}