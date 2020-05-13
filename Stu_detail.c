#include<stdio.h>
#include<conio.h>
int main()
{
    char name[10], dummy;
    int roll[5],i;
    float marks[5];
    for( i=0; i<3; i++)
    {
        printf("Enter name, roll and marks of the student %d: ",i+1);
        scanf("%s %d %f", &name[i], &roll[i], &marks[i]);
        scanf("%c",&dummy); // enter will be stored into dummy character at each iteration
    }
    printf("Printing the student details: ");
    for(i=0; i<3; i++)
    {
        printf("%s %d %f\n", name[i], roll[i], marks[i]);
    }
    return 0;
}
