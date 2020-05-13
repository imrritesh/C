#include<stdio.h>

 int sum (int n1,int n2);

 int main()
 {
 int num1 = 10;
 int num2 = 20;
 int result;

 int *(*ptr)(int,int);
 ptr = &sum;
 result = (*ptr)(num1,num2);

 printf("Addition : %d",result);

 return(0);
 }

int sum (int n1,int n2)
{
return(n1 + n2);
}
