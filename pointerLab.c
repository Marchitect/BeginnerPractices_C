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

 int intArray[5];
 intArray[1]=1;
 printf("%d\n", intArray[1]);
 *(intArray+1)=2;
 printf("%d\n", intArray[1]);
 return 0; 
}
