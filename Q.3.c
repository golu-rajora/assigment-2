#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the two value-");
    scanf("%d %d",&a,&b);
    printf("first value is a=%d and second value is b=%d\n",a,b);
    int c;
    c=a;
    a=b;
    b=c;
    printf("swap the value is a=%d and b=%d",a,b);
    getch();
    return 0;


}
