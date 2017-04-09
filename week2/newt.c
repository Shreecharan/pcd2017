#include<stdio.h>
#include<math.h>
float square(float n)
 {
 float diff,r1,r2;
 r1=n/2;
 r2=n/r1;
 diff=fabs(r1-r2);
 while (diff>0.00001)
 {
 r1=(r1+r2)/2;
 r2=n/r1;
 diff=fabs(r1-r2);
}
return r1;
}
int main()
 {
 float s,n;
 printf("enter the number\n");
 scanf("%f",&n);
 s=square(n);
 printf("square root of the  no %f=%f\n",n,s); 
 return 0;
}
