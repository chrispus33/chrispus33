#include <stdio.h>
#include <stdlib.h>

int main(){
/*A program to store and manage student records */
//variable initialization.
char regNumber [30];
printf("Enter your regNumber\n");
scanf("%s",&regNumber);
printf("regNumber%s\n",regNumber);

char firstName [30];
printf("Enter your firstname\n");
scanf("%s",&firstName);
printf("welcome%s\n",firstName);

char lastName [30];
printf("Enter your lastname\n");
scanf("%s",&lastName);
printf("welcome%s\n",lastName);

int age;
printf("Enter age\n");
scanf("%d",&age);
printf("Your age is %d",age);

float introtoprogramming;
printf("Enter marks\n");
scanf("%f",&introtoprogramming);
printf("Intro to programming mark is %f\n",introtoprogramming);

float networking;
printf("Enter marks\n");
scanf("%f",&networking);
printf("Networking mark is %f\n",networking);

float accounting;
printf("Enter marks\n");
scanf("%f",&accounting);
printf("Accounting mark is %f\n",accounting);

float operatingsystem;
printf("Enter marks\n");
scanf("%f",&operatingsystem);
printf("Operating system mark is %f\n",operatingsystem);

float computerapplication;
printf("Enter marks\n");
scanf("%f",&computerapplication);
printf("Computer application mark is %f\n",computerapplication);
return 0;
}
