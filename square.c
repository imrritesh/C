#include<stdio.h>
#include<conio.h>
float square(float x);
int main()
{
    int m, n;
    printf("Enter a number: ");
    scanf("%d", &m);
    n  = square(m);
    printf("\nSquare: %d", n);
}
float square(float x)
{
    float p;
    p = x*x;
    return (p);
}
