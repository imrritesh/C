#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef enum {FALSE,TRUE} bool;
struct node
{
	int info;
	int balance;
	struct node *lchild;
	struct node *rchild;
};
struct node *insert(int,struct node*,int*);
struct node *search(struct node*,int);
void display(struct node *ptr,int level)
{
	int i;
	if(ptr!=NULL)
	{
		display(ptr->rchild,level+1);
		printf("\n");
		for(i=0;i<level;i++)
		 printf("");
		 printf("%d",ptr->info);
		 display(ptr->lchild,level+1);
	}
}
void inorder(struct node *ptr)
{
 if(ptr!=NULL)
 {
  inorder(ptr->lchild);
  printf("%d ",ptr->info);
  inorder(ptr->rchild);
 }
}
void main()
{
	bool ht_inc;
	int info;
	int choice;
	struct node *root;
	//clrscr();
	root=(struct node *)malloc(sizeof(struct node));
	root=NULL;
	printf("\n 1.Insert \n 2.Display \n 3.Exit");
	while(1)
	{
		printf("\n Enter your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("\n Enter the value to be inserted :");
					scanf("%d",&info);
					if(search(root,info)==NULL)
					  root=insert(info,root,&ht_inc);
					else
					  printf("\n Duplicate value ignored");
					break;
			case 2:if(root==NULL)
					{
						printf("\n Tree is empty");
						continue;
					}
					printf("\n Tree is :");
					display(root,1);
					printf("\n Inorder :");
					inorder(root);
					break;
			case 3:exit(1);
					break;
			default:printf("\n Enter your coorect choice");
		}
	}
}
struct node *search(struct node *ptr,int info)
{
	if(ptr!=NULL)
      if(info<ptr->info)
	ptr=search(ptr->lchild,info);
      else if(info>ptr->info)
	ptr=search(ptr->rchild,info);
    return(ptr);
}
struct node *insert(int info,struct node *pptr,int *ht_inc)
{
	struct node *aptr;
	struct node *bptr;
	if(pptr==NULL)
	{
		pptr=(struct node *)malloc(sizeof(struct node));
		pptr->info=info;
		pptr->lchild=NULL;
		pptr->rchild=NULL;
		pptr->balance=0;
		*ht_inc=TRUE;
		return (pptr);
	}
	if (info<pptr->info)
	{
		pptr->lchild=insert(info,pptr->lchild,ht_inc);
		if(*ht_inc==TRUE)
		{
			switch(pptr->balance)
			{
				case -1: pptr->balance=0;
				       *ht_inc=FALSE;
				       break;
			    case 0:pptr->balance=1;
				   break;
			    case 1:aptr=pptr->lchild;
					if(aptr->balance==1)
					{
						printf("\n left to left rotation");
						pptr->lchild=aptr->rchild;
						aptr->rchild=pptr;
						pptr->balance=0;
						aptr->balance=0;
						pptr=aptr;
						}
						else
						{
							printf("\n left to right rotation");
							bptr=aptr->rchild;
							aptr->rchild=bptr->lchild;
							bptr->lchild=aptr;
							pptr->lchild=bptr->rchild;
							bptr->rchild=pptr;
							if(bptr->balance==1)
							  pptr->balance=-1;
							else
							  pptr->balance=0;
							if(bptr->balance==-1)
							  aptr->balance=1;
							else
							   aptr->balance=0;
							bptr->balance=0;
							pptr=bptr;
						}
						*ht_inc=FALSE;
			}
		}
	}
	if(info>pptr->info)
	{
		pptr->rchild=insert(info,pptr->rchild,ht_inc);
		if(*ht_inc==TRUE)
		{
			switch(pptr->balance)
			{
				case 1:pptr->balance=0;
				       *ht_inc=FALSE;
				       break;
				case 0:pptr->balance= -1;
				       break;
				case -1:aptr=pptr->rchild;
						if(aptr->balance==-1)
						{
							printf("\n right to right rotation");
							pptr->rchild=aptr->lchild;
							aptr->lchild=pptr;
							pptr->balance=0;
							aptr->balance=0;
							pptr=aptr;
						}
						else
						{
							printf("\n right to left rotation");
							bptr=aptr->lchild;
							aptr->lchild=bptr->rchild;
							bptr->rchild=aptr;
							pptr->rchild=bptr->lchild;
							bptr->lchild=pptr;
							if(bptr->balance==-1)
							  pptr->balance=1;
							else
							  pptr->balance=0;
							if(bptr->balance==1)
							  aptr->balance=-1;
							else
							  aptr->balance=0;
							  bptr->balance=0;
							  pptr=bptr;
						}
						*ht_inc=FALSE;
			}
		}
	}
  return(pptr);
}

