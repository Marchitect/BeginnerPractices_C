/* convert Fahrenheit to Celsius */
#include <stdio.h>
int celsius(int fahr){
	int celsius=5*(fahr-32)/9;
	return celsius;
}

int oneAtATime(){
	printf("Input an fahrenheit.\n");
	int x;
	scanf("%d", &x);
	printf("The convert Celsius value is %d\n", celsius(x));
	return 0;
}
int main(){	
	int y;
	oneAtATime();
	int i = 1;
	while(i){
		printf("Do you want to quit this converter? type 0 for yes, 1 for no and continue.\n");
		scanf("%d", &y);
		if(y==1)
			oneAtATime();
		else if (y==0)
			i-=1;
	}
	return 0;
}
