#include <stdio.h> 
 int a,b,c,d,e,f; 
 struct complex_number
 {
     int real_part;
     int img_part;
     
 } n1,n2;
void fun(struct complex_number n1, struct complex_number n2);
int main() 
{ 
     
     printf("Enter the real part of 1st no.= ");
     scanf("%d",&n1.real_part);
     printf("Enter the Imaginary part of 1st no.= ");
     scanf("%d",&n1.img_part);
     printf("Enter the real part of 2nd no.= ");
     scanf("%d",&n2.real_part);
     printf("Enter the Imaginary part of 2nd no.= ");
     scanf("%d",&n2.img_part);
     fun(n1,n2);
    
    
} 
void fun(struct complex_number n1, struct complex_number n2)
{
    int a = n1.real_part + n2.real_part;
    int b = n1.img_part + n2.img_part;
    printf("addition is = %d+i%d\n",a,b);
    int e = n1.real_part - n2.real_part;
    int f = n1.img_part - n2.img_part;
    printf("subtraction is = %d+i%d\n",e,f);
    int g = (n1.real_part * n2.real_part) - (n1.img_part * n2.img_part) ;
    int h = (n1.real_part *n2.img_part) +  (n1.img_part * n2.real_part);
    printf("multiplication is = %d+i%d",g,h);
    
    
}
