#include <stdio.h>

int main(){
 int c;
 while((c=getchar())!=EOF){
  //in computing, generally 1 represents true while 0 represents false.
  printf("%i\n", getchar()!=EOF);
  //EOF (as defined in the C language) is not a character/not an ASCII value. That's why getc returns an int and not an unsigned char - because the character read could have any value in the range of unsigned char, and the return value of getc also needs to be able to represent the non-character value EOF (which is necessarily negative).
  printf("%i\n", EOF);
  putchar(c);
  }
 return 0;
}
