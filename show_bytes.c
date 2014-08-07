#include <stdio.h>
#include <string.h>

// define a new datatype named byte_pointer which is a pointer and holds
// the address for some data of unsigned char datatype

// why use unsigned char? For it gives the 0 to 255 range, which is the
// amount of numbers that 2 hexadecimal digits can represent (2**8=256).
typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len){
    int i;
    //tries to print the address value saved under the pointer named 'start'
    //in hexadecimal format, but seems not always working as I want it to be?
    printf("%x ", start);
    for(i=0; i<len; i++)
        //prints every individual byte in hexadecimal:
        //one byte equals 8 bits, hence 2**8, i.e. two hexadecimals
        //The C formatting directive “%.2x” indicates that an integer should
        //be printed in hexadecimal with two digits, tallying with the code above

        //start[i] means "start from the value whose address I am holding,
        //to the next value which locates just next to the previous value."
        printf("%.2x ", start[i]);
    printf("\n");

}
void show_short(short x){
    printf("Size of a short int on my OS is: %lu\n", sizeof(short));
    show_bytes((byte_pointer) &x, sizeof(short));
}
void show_int(int x){
    printf("Size of an int on my OS is: %lu\n", sizeof(int));
    show_bytes((byte_pointer) &x, sizeof(int));
}
void show_long(long x){
    printf("Size of a long int on my OS is: %lu\n", sizeof(long));
    show_bytes((byte_pointer) &x, sizeof(long));
}
void show_float(float x){
    printf("Size of a float on my OS is: %lu\n", sizeof(float));
    show_bytes((byte_pointer) &x, sizeof(float));
}
void show_double(double x){
    printf("Size of a double on my OS is %lu\n", sizeof(double));
    show_bytes((byte_pointer) &x, sizeof(double));
}
void show_pointer(void *x){
    printf("Size of a pointer on my OS is: %lu\n", sizeof(void *));
    show_bytes((byte_pointer) &x, sizeof(void *));
}

//distinguish if the underlying architecture is big or little endian
void is_little_endian(){
    unsigned int x = 0x28491204;
    char *c = (char*) &x;
    // printf ("*c is: 0x%x\n", *c);
    if (*c == 0x04){
    printf ("My machine is little endian. \n");
    }
    else{
    printf ("My machine is big endian. \n");
    }
    
}

//simply yield a word consisting of the least significant byte of x
//and the remaining bytes of y, on a little endian machine
void hexaCombiner(int x, int y){
    byte_pointer addr_x=(byte_pointer) &x;
    byte_pointer addr_y=(byte_pointer) &y;
    printf("0x%.2x%.2x%.2x", addr_y[3], addr_y[2], addr_y[1]);
    printf("%.2x\n", addr_x[0]);

}

int main(int argc, char **argv)
{
    is_little_endian();
    printf("\n");
    hexaCombiner(0x4782ae23, 0x30397696);
	short x=12345;
	short mx=-x;
    //When run on a little-endian machine, e.g. Intel x86-64 processor running Mac OS X,
    //the small code block below prints 39 30, 39 30 00 00, c7 cf ff ff
    show_short(x);
    show_int(x);
    show_int(mx);
    //If run on a big-endian machine, the first line of the small code block above
    //should print 30 39, indicating that short x has hexadecimal representation 0x3039,
    //whereas int mx should have hexadecimal representation 0xFFFFOCFC7.

    show_int(3510593);
    show_float(3510593.0);
    show_long(-1000887555);
    show_double(0.4352624325);
    printf("\n\n");


    //prints the hexadecimal values of characters.
    const char *s = "abcdefg";
    show_bytes((byte_pointer)s, strlen(s));

    return 0; 
}
