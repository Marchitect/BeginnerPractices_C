// is_prime.c

#include <stdio.h>
#include <stdlib.h>
int is_prime(int x){
	// int input;
	if(x<2)	printf("Not a prime.\n");
	else if(x==2) printf("Is a prime.\n");
	else {
		for(int i=2; i<(x/2+1); i++){
			if(x%i==0) {
				printf("Not a prime.\n");
				return 0;
			}
		}
		printf("Is a prime.\n");
		return 0;
	}
}

int flager(){
	int input;
	printf("Please give a number to test if it is a prime.\n");
	scanf("%i", &input);
	is_prime(input);
}
int main(int argc, char **argv)
{
	flager();
	int flag;
	int i=1;
	// int input;
	// printf("Please give a number to test if it is a prime.\n");
	// scanf("%i", &input);
	// is_prime(input);
	while(i){
	printf("Do you want to continue? type 1 for yes, 0 for no and quit.\n");
	scanf("%i", &flag);
		if (flag==1) flager();
		else if(flag==0) i-=1;
		else{
			printf("You didn't correctly follow the instruction.\n");
			return 0;
		}
	}
    return 0; 
}