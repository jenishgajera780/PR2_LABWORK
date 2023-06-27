

//write a program to check wether a number is even or odd using the ternary operator.

#include<stdio.h>
#include<conio.h>

void main (){

int a;
clrscr();
printf("*******");
printf("anter any number");
printf("*******");
scanf("%d",&a);

(a % 2 == 0) ? printf("this number is even")
      :printf("this number is odd");

getch();
}