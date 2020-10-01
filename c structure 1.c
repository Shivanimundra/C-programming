#include <stdio.h> 
  struct school 
{ 
  char name[10];
  int roll_no;
  int marks;
  int age; 
}; 
int main() 
{ 
    struct school student = {"Shivani",1,25,18};
    //struct school *p1 = &student;
    printf("%s,%d,%d,%d",student.name,student.age,student.marks,student.roll_no);
} 
  
