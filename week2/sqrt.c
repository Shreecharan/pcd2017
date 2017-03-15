#include<stdio.h>
 
#include<math.h>
int main() 
{
 float s, r1, r2, diff;
// Input the number to find the square root. 
printf( "\nEnter a number to find the square root of: " ); 
scanf ( "%f", &s ); 
r1 =s / 2.0; r2 = s / r1; diff = fabs ( r1 - r2 );
//Iterate to compute the root till error is not with-in tolerance. 
while ( diff > 0.000001 )
{
r1 = ( r1 + r2 )/ 2.0;
r2 = s / r1;
diff = fabs ( r1 - r2 );
 }
// Display the Square Root of the given number.
 printf("The Square Root of %f is: %f\n", s, r1 );
 return 0;
}
