#include <stdio.h>

int main()
{
    int  data = 10;  //1010             

    // Get 1st bit from data
    int bit_1 = (data) & 1;

    // Get 2nd bit from data
    int bit_2 = (data >> 1) & 1;
    
    printf("%d,%d\n",bit_1,bit_2);

    // Get XOR of bit_1 and bit_2
    int xor_of_bit = bit_1 ^ bit_2;

   printf("After swapping the bits, data value is: %d", data ^ (xor_of_bit | xor_of_bit << 1));

    return 0;
}
