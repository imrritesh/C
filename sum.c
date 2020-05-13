#include<stdio.h>

int sum(int a,int b)
{
    if(b<a)
      return sum(b,a);
      if(b==0)
        return;
      return (a + sum(a, b-1));
}
int main()
{
    int a,b;
    a=30;
    b=2;
    int result;
    result=sum(a,b);
    printf("%d",result);
    return 0;
}
