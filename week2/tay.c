#include<stdio.h> 
#include<math.h>
	float convertradians(float degree)
	{
		float rad;
		rad = (3.142 / 180) * degree;
		return rad;
	}
	float computesin(float x)
	{
		float term, sum, diff, prev;
		int i;
		term = sum = diff = x;
		for (i = 3; diff > 0.00001; i = i + 2)
		{
			prev = term;
			term = (-term * x * x) / (i * (i - 1));
			diff = fabs(prev - term);
			sum = sum + term;
		}
		return sum;
	}
    int main() 
{
    float degree, x, sum;
	printf("enter the degree");
	scanf("%f", &degree);
    x=convertradians(degree);	
    sum=computesin(x);
    printf("sin(%f)=%f", degree, sum);
	return 0;
}
