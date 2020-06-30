#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d", &a); 
    scanf("%d", &b);
    int c=a+b;
    int d=a-b;
    int e=a*b;
    int f=a/b;
    int g=a%b;
    printf("sum is c=%d\n",c);
    printf("sub is d=%d\n",d);
    printf("mul is e=%d\n",e);
    printf("div is f=%d\n",f);
    printf("modulo div g=%d\n",g);
    return 0;
}
