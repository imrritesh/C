#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, *p, *q, sum=0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    p = &a;
    q = &b;
    sum = *p+*q;
    printf("%d", sum);
    return 0;
}
