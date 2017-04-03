#include<stdio.h>
int findreverse(int n)
{
int s=0;
int dig=0;
int temp;
temp=n;
while(temp>0)
{
dig=temp%10;
s=s*10+dig;
temp=temp/10;
}
return s;
}
int main()
{
int x,n,s;
printf("enter the number");
scanf("%d",&n);
x=findreverse(n);
printf("the reverse of the number is %d",s);
if(n==s)
{
printf("the number is a palindrome");
}
else{
printf("the number is not a palindrome");
}
return 0;
}

