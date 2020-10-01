/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int c=0,a,b,x=0;
int n,i=0;
int string_length( char str[])
{
    while(str[c]!= '\0')
    {
        c++;
    }
    return c;
    c=0;
}
void cmp_string(char *str1, char *str2)
{
    if(a!=b)
    {
      printf("strings are not equal\n");
    }
    else
    {
             while(*str1 == *str2)
             {
                str1++;
                str2++;
                i++;
                if(i==a)
                {
                  printf("strings are equal\n");
                  x=1;
                }
             }
    }
    if(x!=1)
    {
        printf("strings are not equal");
    }
}

 int main()
{
    char name1[30];
    char name2[30];
    printf("enter the string1 = ");
    scanf("%s", name1);
    a = string_length(name1);
    printf("enter the string2 = ");
    scanf("%s", name2);
    b = string_length(name2);
    cmp_string(name1,name2);
    return 0;
}

