// 6.2-Q1 Write a program to print 1 to 10 using a do-while loop .

#include<stdio.h>
#include<conio.h>

void main(){
int A=1;
clrscr();
do{
   printf("%d\n",A);
   A++;
}while(A<=10);
getch();
}