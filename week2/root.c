#include<stdio.h>
#include<math.h>
int main()
{
{
float a,b,c,disc;
printf("enter the value of a,b,c");
scanf("%f%f%f",&a,&b,&c);
disc=(b*b)-(4*a*c);
printf("the disc is %f",disc);
float r1,r2,rp,ip;
if(disc==0)
{
r1=r2=-b/(2*a);
printf("the roots are real and equal %f%f ",r1,r2);
}
else if(disc>0)
{
r1=(-b+(sqrt(disc)))/(2*a);
r2=(-b-(sqrt(disc)))/(2*a);
printf("the roots are %f%f",r1,r2);
}
else
{
rp=-b/(2*a);
ip=sqrt(fabs(disc))/(2*a);
printf(" the roots are %f +i %f\n",rp,ip);
printf("%f - i %f",rp ,ip);
}
return 0;
}
}
