#include <stdio.h> 
 struct complex_number
 {
     int day;
     int month;
     int year;
     
 } n1,n2;
int main() 
{ 
     
     printf("Enter the day for date1 = ");
     scanf("%d", &n1.day);
     printf("Enter the month for date1 = ");
     scanf("%d",&n1.month);
     printf("Enter the year for date1= ");
     scanf("%d",&n1.year);
     printf("date1 is = %d/%d/%d\n",n1.day,n1.month,n1.year);
     printf("Enter the day for date2 = ");
     scanf("%d",&n2.day);
     printf("Enter the month for date2 = ");
     scanf("%d",&n2.month);
     printf("Enter the year for date2 = ");
     scanf("%d",&n2.year);
     printf("date2 is = %d/%d/%d\n",n2.day,n2.month,n2.year);
     if(n1.day==n2.day && n1.month==n2.month && n1.year==n2.year)
     {
         printf("dates are equal");
          
     }
     else
     {
         printf("dates are not equal");
         
     }
} 


