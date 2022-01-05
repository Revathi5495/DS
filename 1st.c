#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
};
struct node*root=NULL;
void insert_begin()
{
	struct node*temp,*p=root;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the node data:");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL)
	{
		root=temp;
		temp->link=root;
	}
	else
	{
		temp->link=root;
		root=temp;
		while(p->link!=root)
		{
			p=p->link;
		}
		p->link=root;
	}
}
void insert_end()
{
	struct node*temp,*p=root;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the node data:");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL)
	{
		root=temp;
		temp->link=root;
	}
	else
	{
		temp->link=root;
		root=temp;
		while(p->link!=root)
		{
			p=p->link;
		}
		p->link=temp;
		temp->link=root;
	}
}
void delete_begin()
{
	struct node*temp,*p=root;
	if(root==NULL)
	{
		printf("no nodes delete..");
	}
	else
	{
		root=temp->link;
		temp->link=NULL;
		free(temp);
		while(p->link!=root)
		{
			p=p->link;
		}
		p->link=root;
	}
}
int len()
{
	int c=0;
	struct node *temp=root;
	while(temp->link!=root)
	{
		c++;
		temp=temp->link;
	}
	return c;
}
void delete_end()
{
	struct node *p=root;
	if(root==NULL)
	{
		printf("no nodes delete..");
	}
	else
	{
		int x=1;
		while(x<len()-1)
		{
			p=p->link;
			x++;
		}
		struct node*q;
		q=p->link;
		p->link=NULL;
		p->link=q->link;
		q->link=NULL;
		free(q);
	}
}
void display()
{
	struct node*temp=root;
	if(root==NULL)
	{
		printf("no nodes to delete..");
	}
	while(temp!=root)
		{
			printf("%d\t",temp->data);
			temp=temp->link;
		}
}
int main()
{
	int ch;
	    printf("circular linked list operations\n");
		printf("\n1.insert at begin\n2.insert at end\n3.delete at begin\n4.delete at end\n5.display\n6.exit\n");
		while(1)
		{
			printf("enter your choice:");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					insert_begin();break;
				case 2:
					insert_end();break;
			    case 3:
					delete_begin();break;
				case 4:
					delete_end();break;
				case 5:
					display();break;
			    case 6:
					exit(0);break;
				default:
					printf("invalid choice..");break;	
				
			}
		}
}
