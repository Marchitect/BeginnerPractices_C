#include <stdio.h>
#include <stdlib.h>
void printMultiples(int i, int j){
 int c=1;
 while(c<=j){
  printf("%i	", c*i);
  c+=1;
 }
}
void printMultiTable(int j){
 int d=1;
 while(d<=j){
  printMultiples(d, j);
  printf("\n");
  d+=1;
 }
}
int main(int argc, char **argv)
{
 printf("Please enter an integer as the row value of square matrix: \n");
 int x;
 scanf("%d", &x);
 printMultiTable(x);
 return 0;
}
