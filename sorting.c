#include<stdio.h>
#include<conio.h>
int sort(int arr[5]);
int main()
{
    int arr[5] = {10, 30, 20, 40, 50}, i, j, temp;
    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i=0; i<5; i++)
    {
        printf("%d\t", arr[i]);
    }
    for(i=0; i<5; i++)
    {
        if(arr[i]==30)
        {
            printf("\n30 is present in the array at location %d ", i+1);
        }
    }

    printf("\n Array passed to a function: ");
    int sum = sort(arr);
    printf("\nAddition= %d", sum);

    return 0;
}
int sort(int arr[5])
{
    int sum;
    for(int i=0; i<5; i++)
    {
        sum += arr[i];
    }
    return sum;
}
