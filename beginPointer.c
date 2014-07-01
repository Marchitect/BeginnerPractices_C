#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
 int number = 5; 
 int *i_p;
 i_p = &number;
 printf("%i\n", *i_p);
 *i_p = *i_p + 2; 
 printf("%i\n", number);  
 return 0;
} 
