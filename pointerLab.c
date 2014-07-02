#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
 int individual01;
 int *i_p;
 i_p=&individual01;
 *i_p=6;
 printf("%i\n", individual01);
 *i_p+=4;
 printf("%i\n", individual01);
 printf("%x\n", i_p);
 printf("%i\n", i_p);
 return 0; 
}
// output:
//
// 6
// 10
// 57dcbbfc
// logout
