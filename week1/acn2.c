#include <stdio.h>

struct complex {
float real;
float imaginary;
}
struct complex add complex (struct complex a, struct complex b)
{
struct complex c;
c.real=a.real+b.real;
c.imaginary=a.imaginary+b.imaginary;
return c;
}
struct complex get complex()
{
struct complex r;
printf("enter the real part\n");
scanf("%f", &r.real);
printf("enter the imaginary part\n");
scanf("%f", &r.imaginary);
return r;
}
show complex(struct complex a)
printf("%f\n",a.real);
printf("%f\n",a.imaginary);
i nt main(void)
{
struct complex a;
struct complex b;
a=get complex();
b=get complex();
struct complex c=add(a,b);
show complex c;
return 0 ;
}




