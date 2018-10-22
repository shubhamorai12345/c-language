#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,n,k,ms=1;
   clrscr();
   printf("enter the number");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     for(j=(n-1);j>i;j--)
     {
     printf(" ");
     }
     for(k=0;k<ms;k++)
     {
      printf("*");
      }
    ms=ms+2;
    printf("\n");
    }
getch();
}

