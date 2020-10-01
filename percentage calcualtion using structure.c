#include <stdio.h> 
  struct marks
{ 
  int rollno;
  int chem_marks;
  int phy_marks;
  int math_marks;
  char name[10]; 
} s1,s2,s3; 
int main() 
{ 
   
     s1.rollno = 1;
     s1.chem_marks = 80;
     s1.phy_marks =87;
     s1.math_marks=94;   
  float percentage = (s1.chem_marks+s1.phy_marks+s1.math_marks)/3 ;
    
    printf("percentage is = %f",percentage);
    printf("%%");
       
     
    
} 