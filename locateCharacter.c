#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int locateCharacter(char *s, char c){
 int i=0;
 while(i<strlen(s)){
  if(s[i]==c) return i;
  i++;
 }
 return 0;
}
int main(int argc, char **argv)
{
 printf("%i\n", locateCharacter("adbc", 'c'));
 return 0; 
}