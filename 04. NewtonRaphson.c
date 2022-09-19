#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double fun(double x){
  return 3*x - cos(x) - 1;
}

double diff_fun(double x){
  return 3 + sin(x);
}

int main(){
  double x;
  printf("Enter the intital x: ");
  scanf("%lf",&x);

  double tolerance;
  printf("\nEnter the value of tolerance: ");
  scanf("%lf",&tolerance);
  
  while(fabs(fun(x)) > tolerance){
  
  printf("x : %lf    f(x) : %lf\n",x,fun(x));
  
  double y = x - (fun(x)/diff_fun(x));
  
  x = y;
  
  }while(fabs(fun(x)) > tolerance);
  
  return 0;

}
