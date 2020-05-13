#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
    //struct *head, *ptr;
    //ptr = (struct node*)malloc(sizeof(struct node*));

void insert_beg();
void insert_last();
void insert_random();
void delete_beg();
void delete_last();
void delete_random();
void display();
void search();
int main()
{
    int n=0;
    while(n!=9)
    {
    printf("\n\n           *********Main Menu*********\n");
    printf("          :Select option from the list:");
    printf("\n===============================================\n");
    printf("\n1.Insertion at the begining:\n2.Insert at the last:\n3.Insert at random:\n4.Delete at the begining:\n5.Delete at the last:\n6.Delete at random\n7.Display:\n8.Search:\n9.Exit\n");
    printf("\n\nEnter the option: ");
    scanf("%d", &n);
    switch(n)
    {
    case 1:
        insert_beg();
        break;
    case 2:
        insert_last();
        break;
    case 3:
        insert_random();
        break;
    case 4:
        delete_beg();
        break;
    case 5:
        delete_last();
        break;
    case 6:
        delete_random();
        break;
    case 7:
        display();
        break;
    case 8:
        search();
        break;
    case 9:
        exit(0);
        break;
    default:
        printf("\nEnter valid option: ");
    }
  }
}
void insert_beg()
{
    struct node *ptr;
    int item;
    ptr = (struct node *) malloc(sizeof(struct node *));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter value\n");
        scanf("%d",&item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nNode inserted");
    }
