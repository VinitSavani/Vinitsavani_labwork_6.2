// 6.2-Q3 Write a program to print even numbers from 1 to N using a do-while loop.

#include<stdio.h>
#include<conio.h>

void main(){
int A,B=1;
clrscr();
printf("Enter any positive number:");
scanf("%d",&A);
do{
   if (B % 2 == 0){
   printf("%d\n",B);
   }B++;
}while(A>=B);
getch();
}