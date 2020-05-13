#include<stdio.h>
void main()
{
    char a, f='a';
    do{
    scanf("%c", &a);
    if(a>='a'||a<='n')
    {
        printf("%c\n", a+11);
    }
    else
    {
    for(char i=15;i<=26;i++)
        {
            for(int u=10;u<=1;u--)
            {
              printf("%c", f+i+u);
            }
        }
    }}while(1);
}

