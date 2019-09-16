#include <stdio.h>

int main (){

int x, y, temp, i, sum=0, a;

	printf("put first number :");
	scanf("%d", &x);
	printf("put second number :");
	scanf("%d", &y);
	printf("divisor :");
	scanf("%d", &a);

	if (x > y){
	temp = y;
	y = x;
	x = temp;
	}
	for (i = x; i <= y; i++){
		if((i % a)!= 0){
		sum += i;
		}
	}

	printf("\nSum: %d\n", sum);
	return 0;
}
