#include<stdio.h>
#include<math.h>

float fun(float x){
	float ans = x*x*x - 5*x +1;
	return ans;
}

int main(){
	float a,b;
	printf("Enter the value of a and b: ");
	scanf("%f%f",&a,&b);

	if(fun(a) * fun(b)< 0){
		printf("Range is correct\n");
		float allowed_err;
		printf("Enter the allowed error: ");
		scanf("%f",&allowed_err);

		float x = (a+b)/2;
		while(fabs(fun(a)) > allowed_err){
			if(fun(a)*fun(x) < 0) b = x;
			else if (fun(x) * fun(b) < 0) a = x;
			x = (a+b)/2;
			printf("x = %f f(x) = %f\n",fabs(x),fun(x));
		}
		printf("x = %f f(x) = %f\n",fabs(x),fun(x));
	}
	else{
		printf("Range is incorrect");
	}
	
	return 0;
}
