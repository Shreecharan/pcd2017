#include<stdio.h>
#include<math.h>
float finddisc(float d)
{
float a, b, c;
d = ( b * b ) - ( 4 * a * c) ;
return d;
}
float findroots(float r1, float r2)
{
float rp, ip, a, b, c, d;
if ( d == 0 )
{
r1 = r2 = -b / ( 2.0 * a );
return 0;
}
else if ( d > 0 )
{
r1 = ( -b - ( sqrt ( d ) ) ) / ( 2.0 * a );
r2 = ( -b + ( sqrt ( d ) ) ) / ( 2.0 * a );
return 1;
}
else
{
rp = - b / ( 2.0 * a );
ip = sqrt ( ( - d ) ) / ( 2.0 * a );
return 2;
}
}
int main()
{
float a, b, c, d, r1, r2, rp, ip, x;
int r;
printf ( "\nEnter three non-zero coefficients ( a, b and c ) of the Quadratic Equation: " );
scanf ( "%f%f%f", &a, &b, &c );
x= finddisc(d);
r=findroots(r1, r2);
switch (r)
{
case 0:
printf("the roots are real and equal %f%f\n",r1,r2);
break;
case 1:
printf("the roots are real and unequal %f%f\n",r1,r2);
break;
case 2:
printf ( "\nRoots are Imaginary: \n r1 = %f + i * %f \n r2 = %f - i * %f \n\n", rp, ip, rp, ip);
break;
default:
break;
}
return 0;
}
