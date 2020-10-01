#include <stdio.h>   
int a;
int main() 
{ 
  printf("ENTER A TWO DIGIT NO.= ");
  scanf("%d",&a);
  if(a!=0)
  {
   printf("THE REVERSE IS=  ");
    int b = a%10;
    printf("%d",b);
    a=a/10;
    printf("%d",a);



  }
} 