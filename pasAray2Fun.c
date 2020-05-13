#include<stdio.h>
#include<conio.h>
int disp(int a, int b);
void main()
{
    int arr[100]= {1,2,3,4,5};
    disp(arr[1], arr[2]);
}
int disp(int a, int b)
{
    printf("%d", a);
    printf("\n%d", b);
}
