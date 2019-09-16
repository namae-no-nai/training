#include <stdio.h>

int main (){

int x, y ;

	printf("insert coordinates: \n x:");
	scanf("%d", &x);
    printf("y:");
	scanf("%d", &y);

	if (x>0 && y>0){
	printf("quadrant 1");
	}else if(x<0 && y>0){
	printf("quadrant 2");
	}else if (x<0 && y<0){
	printf("quadrant 3");
	}else if (x>0 && y<0){
	printf("quadrant 4");
	}else{
	printf("0 or not valid input");
    }

	return 0;

}


