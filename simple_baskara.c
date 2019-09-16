#include <stdio.h>
#include <math.h>

 int main()
 {

double x, y, delta, del;
double a, b, c;

    printf("insert ax²+bx+c :");
    scanf("%lf %lf %lf", &a, &b, &c);
    delta = (b)*(b) - (4*((a)*(c)));
    printf("%lf \n", delta);
    if (delta > 0 && a!= 0){
        del = sqrt (delta);
        printf("%lf", del);
        x = (-b + del)/(2*(a));
        y = (-b - del)/(2*(a));
        printf(" the roots of %.0lfx² %.0lfx %.0lf are %.2lf %.2lf \n",a ,b ,c, x, y);
    }else{
        printf("roots impossible or imaginary \n");
    }


	return 0;
 }





