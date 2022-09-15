#include <stdio.h>
#include<stdlib.h>
#include <math.h>

double fun(double x){
    return (cos(x) + 1)/3;
}

double diff_fun(double x){
    return (-sin(x) / 3);
}

double gfun(double x){
    return cos(x)-3*x+1;
}

int main()
{
    double x;
    printf("Enter the intital x: ");
    scanf("%lf",&x);
    
    if(diff_fun(x) < 1){
        printf("Range is Correct");
        double tolerance;
        
        printf("\nEnter the value of tolerance: ");
        scanf("%lf",&tolerance);
        
        while(fabs(gfun(x)) > tolerance){
            x = fun(x);
            printf("x : %lf  f(x) : %lf\n",x,fun(x));
        }
    }else{
        printf("Initial guess is wrong");
    }
    return 0;
}
