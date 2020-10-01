

#include <stdio.h>
int c=0;
int string_length( char str[])
{
    while(str[c]!= '\0')
    {
        c++;
        
    }
		return c;
    printf("length of the string is = %d",c);
}

int fun()
{
    char name[30];
    printf("enter the string = ");
    scanf("%s", name);
    string_length(name);
    return 0;
}
