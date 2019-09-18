/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
/* Count bits in a num */
int main ()
{
    int count = 0;
    int x = 10;
    
    for (count = 0; x != 0; x = x >> 1)
    {
        if (x&1)
        {
            count++;    
        }
        
    }
    printf("count : %d\n", count);
 
}
