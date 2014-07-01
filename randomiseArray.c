#include <stdio.h>
#include <stdlib.h>
//for function randomizeArray, the return type is void, which means that it returns a vector of integers.
//types of parameters are shown in the brackets. 
void randomizeArray (int array[], int length, int upperBound){
 int i;
 for (i=0;i<length;i++){
  array[i]=rand()%upperBound;
 }
}
void printArray(int array[], int length){
 int i;
 for (i=0;i<length;i++){
  printf("%i ", array[i]);
 }
}
int main(int argc, char **argv)
{
 int length, upperBound;
 printf("please type the number of dimensions you need for the randomised array:\n");
 scanf("%i", &length);
 printf("please name an integer of the random scale:\n");
 scanf("%i", &upperBound);
 int rdmArray[length];
 
 randomizeArray(rdmArray, length, upperBound);
 printArray(rdmArray, length);
 return 0; 
}
