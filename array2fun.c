#include<stdio.h>
#include<conio.h>
int function(int arr[]);
void main()
{
    int arr[] = {1,2,3,4,5}, sum;
    sum = function(arr);
    printf("Sum = %d", sum);
}
int function(int arr[])
{
    int sum;
    for(int i=0; i<5; i++)
    {
        sum += arr[i];
    }
    return sum;
}
