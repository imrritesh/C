#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100], b[100], c[100], k=0, l=0, n, temp, t, i, j;
    printf("How many numbers you want to enter: ");
    scanf("%d", &n);
    printf("Okay, Enter %d numbers: ", n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("You've Entered: ");
    for(int i=1;i<=n;i++)
    {
        printf("%d, ", a[i]);
    }

    for(int i=1;i<=n;i+2)
    {
        if(a[i%2!=0])
        {
            b[k]=a[i];
            k++;
        }
        else
        {
            c[l]=a[i];
            l++;
        }
    }


    for(int i=0;i<t;i++)
    {
     for(int j=0;j<t;j++)
     {
        if(c[i]<c[j])
           {
               temp=c[i];
               c[i]=c[j];
               c[j]=temp;
           }
     }

     for(i=0;i<k;i++)
     {
      for(j=0;j<k;j++)
      {
         if(b[i]>b[j])
           {
               temp=b[i];
               b[i]=b[j];
               b[j]=temp;
           }
      }
     }
     for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
           printf("%d ",b[k]);
           ++k;
           }
       else
           {
            printf("%d ",c[t++]);
           }
    }

    return 0;
}
}
