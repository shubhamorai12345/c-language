#include<stdio.h>
int main()
{ 
   int n,i,arr[40],m,sm;
   printf("Enter the number of element");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   { 
       scanf("%d",&arr[i]);
   }
     printf("The Element is");
     for(i=0;i<n;i++)
     printf("%d",arr[i]);
m=arr[0];
for(i=1;i<n;i++)
 {
     if(m<arr[i])
     m=arr[i];
      }
printf("The max is %d",m);

sm=arr[0];
for(i=1;i<n;i++)
{
     if(sm<arr[i] && arr[i]<m)
      sm=arr[i];
}
printf("\n%d",sm);



return 0;
}
