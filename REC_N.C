#include<stdio.h>
#include<conio.h>
void main()
{
int n,r=0;
clrscr();
printf("Enter the number");
scanf("%d",&n);
while(n!=0)
{
r=r*10;
r=r+n%10;
n=n/10;
}
printf("The reverse number is %d",r);
getch();
}

