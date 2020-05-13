#include<stdio.h>
int main()
{
    int n,a[50],i,j,s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,invalid=0;
    s1=s2=s3=s4=s5=s6=s7=s8=s9=s10=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>=0 && a[i]<=9)
        {
            s1++;
        }
        if(a[i]>=10 && a[i]<=19)
        {
            s2++;
        }
        if(a[i]>=20 && a[i]<=29)
        {
            s3++;
        }
        if(a[i]>=30 && a[i]<=39)
        {
            s4++;
        }
        if(a[i]>=40 && a[i]<=49)
        {
            s5++;
        }
        if(a[i]>=50 && a[i]<=59)
        {
            s6++;
        }
        if(a[i]>=60 && a[i]<=69)
        {
            s7++;
        }
        if(a[i]>=70 && a[i]<=79)
        {
            s8++;
        }
        if(a[i]>=80 && a[i]<=89)
        {
            s9++;
        }
        if(a[i]>=90 && a[i]<=100)
        {
            s10++;
        }
        if(a[i]<0 || a[i]>100)
        {
            invalid++;
        }
    }
    printf("0-9: %d\n",s1);
    printf("10-19: %d\n",s2);
    printf("20-29: %d\n",s3);
    printf("30-39: %d\n",s4);
    printf("40-49: %d\n",s5);
    printf("50-59: %d\n",s6);
    printf("60-69: %d\n",s7);
    printf("70-79: %d\n",s8);
    printf("80-89: %d\n",s9);
    printf("90-100: %d\n",s10);
    printf("Invalid: %d",invalid);
    return 0;
}
