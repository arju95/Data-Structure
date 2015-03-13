#include<iostream>
using namespace std;
#define size 100
int top=0;

struct node 
{
	int data;
	struct node *next;
};
int isempty(struct node *head)
{
	return head==NULL;
}
int isfull()
{
	return top==size;
}
void push(struct node **head,int data)
{
	if(!isfull())
	{
		struct node *newnode=new node;
		newnode->data=data;
		newnode->next=*head;
		*head=newnode;
		top++;
	}
}
int pop(struct node *&head)
{
	if(!isempty(head))
	{
		struct node * temp=new (struct node);
		temp=head;
		head=head->next;
		printf("%d\n",temp->data);
		delete(temp);
		top--;
	}
}
void printstack(struct node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<"->";
		head=head->next;	
	}
	cout<<"NULL\n";
}
int main()
{
	struct node *head=NULL;
	printf("pushing elements into the stack...\n");
	for(int i=1;i<10;i++)
		push(&head,i);
	printstack(head);
	printf("poping elements from stack....\n");
	for(int i=1;i<10;i++)
		pop(head);
	//printstack(head);
	return 0;
}
