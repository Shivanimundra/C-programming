/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
char *my_strrchr(char* str, int c)
{
    int i=0,count=0,x=0;
    char *p=str;
    while(str[x]!='\0')
    {
        if(str[x]==c)
        {
            count++;
        }
        x++;
    }
    while((str[i]!='\0')&&(count!=0))
    {
      if(str[i]==c)
      {
          count--;
      }
      p++;
      i++;
    } 
    return p;
}
char str1[]="AhjAkshieeehjkl";
int main()
{
    char *q=my_strrchr(str1,'e');
      printf("%s",q);
    return 0;
}

