#include <stdio.h>

int main (){

int number;

	printf(" Put a number :");
	scanf("%d", &number);
	
	if (number==0){
	printf(" it's zero");
	}else if (number%2==1 ){ 
	printf("it's an odd number");
	}else{
	printf("it's an even number");
	}

	return 0;
}

