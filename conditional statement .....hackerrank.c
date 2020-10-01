#include <stdio.h> 
 int n; 
int main() 
{ 
   
     scanf("%d",&n);
    if((6<=n)&&(n<=20))
    {
      printf("Weird");
    }
    if(n%2==0) 
    {
        if((n>20||1<n<6))
        {
           printf("Not Weird");   
        }
       
    }
} 
