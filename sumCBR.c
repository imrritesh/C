#include<stdio.h>
#include<conio.h>
int add(int *a, int *b);
void main()
{
    int m=20, n=90, sum=0;
    sum = add(&m, &n);
    printf("Addition of %d and %d = %d",m,n,sum);
    return 0;
}
int add(int *a, int *b)
{
    int sum=0;
    sum = *a + *b;
    return sum;
}
