#include<stdio.h>
#include<conio.h>
int summation(int[]);
void main()
{
    int arr[]={2,3,4,5,6,7};
    int sum = summation(arr);
    printf("Addition: %d", sum);
}
int summation(int arr[])
{
    int sum, i;
    for(i=0;i<=6;i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
