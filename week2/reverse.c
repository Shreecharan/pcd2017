#include<stdio.h>
int main(int n)
{
int s=0;
int dig=0;
printf("enter the number");
scanf("%d",&n);
while(n>0)
{
dig=n%10;
n=n/10;
s=s*10+dig;
}
printf("%d",s);
return 0;
}


