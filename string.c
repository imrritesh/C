#include<stdio.h>
int main()
{
    char str[100];
    int a,i;
    for(i=0;i<100;i++)
    {
        scanf("%c",&str[i]);
    }
    for(i=0;i<100;i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}
