#include<stdio.h>
int isleap(int year) {
    if(year%400==0) {
        return 0;
    }
    else if(year%100==0) {
        return 1;
    }
    else if(year%4==0)
       { return 2;
       }
       else
        {
        return -1;
        }
}
int main() { int year,r;
    printf("enter the year \n");
    scanf("%d",&year);
    r=isleap(year); switch(r) { case 0:
    printf("%d is a qudrenil leap year \n",year);
    break; case -1:
    printf("%d is not a leap year\n",year);
    break; case 1:
    printf("%d is a centuary year\n",year);
    break; case 2:
    printf("%d is a leap year\n",year);
    break ;

 }
 return 0;
}
