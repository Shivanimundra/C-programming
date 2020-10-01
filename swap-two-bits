/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    unsigned char data = 8; // Assiging hexadecimal value

    // Get 1st bit from data
    unsigned char bit_1 = (data) & 1;

    // Get 2nd bit from data
    unsigned char bit_2 = (data >> 2) & 1;
    
    printf("%u\n%u\n",bit_1,bit_2);

    // Get XOR of bit_1 and bit_2
    unsigned char xor_of_bit = bit_1 ^ bit_2;

    printf("After swapping the bits, data value is: %2X", data ^ (xor_of_bit << 1 | xor_of_bit << 2));

    return 0;
}
