#include<stdio.h>
int main()
{
    int a,b;
    float r=0;
    char ch;
    scanf("%d %d %c",&a,&b,ch);
    if(ch=='+')
    {
        r=(float)a+b;
        printf("%d %c %d = %.2f",a,ch,b,r);
    }
    return 0;
}
