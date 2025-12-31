#include <stdio.h>
#include <process.h>
#include <stdlib.h>
struct bank
{
char ac[20];
char nm[20];
int bal;
}cl;
void deposite();
void withdrawal();
void display();
void exit();
int main()
{
int pin;
int ch;
printf("Welcome to the ATM Mobile Banking\n");
while (pin != 9758) // Using while loop to check for the condition on a pin number matching
{
printf("Type your secret pin number:");
scanf("%d", &pin);
if (pin != 9758) // Checking if the pin number types by the user is matched with the database record or not
printf("Please insert your valid password:\n");
}
printf("Welcome to the ATM Mobile Banking");
fflush(stdin);
printf("\n Enter the Account No.:");
gets(cl.ac);
fflush(stdin);
printf("\n Enter the Customer Name:");
gets(cl.nm);
fflush(stdin);
printf("\n Enter the Initial Balance:");
scanf("%d",&cl.bal);
fflush(stdin);

do
{
printf("for Deposit press 1\n");
printf("for Withdrawal press 2\n");
printf("for Display press 3\n");
printf("for Cancel The Transaction press 4\n");
printf("enter your choose");
scanf("%d",&ch);
switch(ch)
{

case 1 : deposite(0);
        break;
case 2 : withdrawal(0);
        break;
case 3 : display(0);
        break;
case 4: exit(0);
printf("\n Thank you for Transaction\n");
        break;
default:
    printf("\n your is wrong!try again\n");

}
}
while(ch!=4);
}

void deposite()
{
int b;
printf("enter the deposit amount:\n");
scanf("%d",&b);
cl.bal+=b;
printf("amount deposit successfully\n");

}
void withdrawal()
{
fflush(stdin);
int a;
printf("\n enter the withdrawal amount:\n");
scanf("%d",&a);
if (a % 100 != 0)
{
printf("\n You are requested to insert the amount in multiples of 100\n");
}
else if (a >cl.bal)
{
printf("\n You are having an insufficient balance\n");
}
else
{
cl.bal = cl.bal- a;
printf("\n\n You can now collect the cash \n");
}
}

void display()
{
printf("\n Customer Account No.=%s", cl.ac);
printf("\n Customer Name=%s",cl.nm);
printf("\n Customer Balance=%d\n",cl.bal);
}



