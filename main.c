/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int x;
  int y;
  int z = 1;

  x = 10;
  y = x = 20;

  y += 10;

  x += y += 5;
  printf ("x = %d\n, y : %d\n, z : %d\n", x, y, z);
  z += x *= y -= 2;

  printf ("x = %d\n, y : %d\n, z : %d\n", x, y, z);

  return 0;
}
