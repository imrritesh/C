#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

struct cluster
{
    char c_name[10];
    int need;
    int storage;
};
int main()
{
    int no_days,no_cl,no_link,F,C;
    struct cluster cl[50];
    //printf("Number of days:");
    scanf("%d",&no_days);
    //printf("Enter the number of cluster: ");
    scanf("%d",&no_cl);
    int i;
    for(i=0;i<no_cl;i++)
    {
        scanf("%s",&cl[i].c_name);
        scanf("%d",&cl[i].need);
        scanf("%d",&cl[i].storage);
    }

    return 0;
}
