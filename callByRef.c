#include<stdio.h>
#include<conio.h>
void swap(int *a, int *b);
void main()
{
    int m=22, n=44;
    printf("Number m=%d, n=%d before swapping ", m,n);
    swap(&m, &n);
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("\n\nNumber after swapping m=%d, n=%d", *a, *b);
   
}

