/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int c=0,a,b;
int string_length( char str[])
{
    while(str[c]!= '\0')
    {
        c++;
        
    }
    
    return c;
    c=0;
}
char* append_string(char str1[], char str2[])
{
       
      int i=0;
      while(str2[i]!='\0')
     {
      str1[a]= str2[i];
      a++;
      i++;
     }
     return str1;
   
    
    
}

int main()
{
    char name1[30];
    char name2[30];
    printf("enter the string1 = ");
    scanf("%s", name1);
    a=string_length(name1);
    printf("length of the string1 is = %d\n",a);
    printf("enter the string2 = ");
    scanf("%s", name2);
    b=string_length(name2);
    printf("length of the string2 is = %d\n",b);
    char *str = append_string(name1,name2);
	printf("%s",str);
    return 0;
}
