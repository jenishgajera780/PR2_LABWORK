// Q2 write a program to input electricity unit charges and calculate the total electricity bill according to the given condition:

/*Input:
       Enter electricity units: 435
Output: 
       Electricity Bill = Rs. 597.0
*/

#include<stdio.h>
#include<conio.h>

void main(){
int unit;
float amount,total-amount,surcharge;

clrscr();
printf("===================================");
printf("<<<<<<< ELECTRICITY BILL >>>>>>>>>>");
printf("===================================\n");

printf("-----------------------");
printf("enter electricity units");
print("------------------------\n");
scanf("%f",&unit); 
  
 if(a<=50){  
 amount = unit*0.50;} 
     else if(unit<=250){ 
      amount = 25 + (unit - 50) * 0.75;} 
 }else if(unit <= 150) * 1.20; 
 }else{amount = 220 +(unit - 250) *1.50;} 
 surcharge = amount * 20%; 
 total-amunt=amount +surcharge; 
 peintf("your total bill is Rs.%.2",total-amount); 
 getch(); 
 }
