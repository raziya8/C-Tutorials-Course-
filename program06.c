#include<stdio.h>
int main()
{
int Dividend , Divisior , Quotient , Reminder ;

    printf("Enter Dividend\n");
     scanf("%d" , & Dividend);
     printf ("Enter Divisior\n");
     scanf ("%d", & Divisior);
  // computer
  Quotient = Dividend /Divisior ;
  // compute reminder
  Reminder = Dividend % Divisior ; 
  printf("Quotient = %d\n", Quotient);
  printf("Reminder = %d\n", Reminder);

    return 0;
}