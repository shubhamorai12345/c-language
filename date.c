#include<stdio.h>
int main()
{
 int d,m,y;
  printf("Enter a date");
  scanf("%d %d %d",&d,&m,&y);
  if(y>=1990 && y<=2020)
     {
        if(m>=1 && m<=12)
          {
             if((d>=1 && d<=31)  && (m==1 || m==3 ||m==5||m==7||m==8||m==10||m==12))
              printf("Date is valid\n");
             else if((d>=1 && d<=30) && (m==4||m==6||m==9||m==11))
              printf("Date is valid\n");
             else if((d>=1 && d<=28) && (m==28))
              printf("Date is valid");
             else if((d>=1 && d<=29) && (y%400==0 && (y%4==0 || y%100!=0)))
              printf("Date is valid\n");
             else
              printf("date is not valid");
           }
         else{
              printf("m not valid\n");
           }}
else
{
printf("year is not valid\n");
}
 
return 0;
}
