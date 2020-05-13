#include<stdio.h>
int main()
{
    char name[]="Ritesh Kumar Singh";
    int i=0,j,len;
    while(name[i++]!=0);
    len=i-1;
    i=0;
    while(len>=0)
        name[i++]=name[len--];

    name[len] = '\0';
    puts(name);
    return 0;
}
/*int length(char str[])
{
    int i=0;
    while(str[i++]!='\0');
    return i;
}*/
