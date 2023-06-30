// write a programe to print the fibonacci series up to N numbers using for loop.

#include<stdio.h>
#include<conio.h>

void main(){
int a,b;
int n1=0,n2=1;
int next=n1+n2;
clrscr();
printf("Enter any positiv number:");
scanf("%d",&b);

for (a=3;a<=b;a++){

   printf("%d\n",next);
   n1=n2;
   n2=next;
   next=n1+n2;
}
getch();
}