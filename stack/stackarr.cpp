#include<stdio.h>
#define size 100
int top=-1;
int arr[size];
int isfull()
{
	return top==size-1; 
}
int isempty()
{
	return top==-1;
}
void push(int data)
{
	if(!isfull())
	{
		arr[top++]=data;
		return;
	}
	printf("stack is full\n");
}
void pop()
{
	if(!isempty())
	{
		printf("%d\n",arr[--top]);
	
		return;
	}
	return;
}
int istop()
{
	printf("%d..is top\n",arr[top-1]);
}
int main()
{
	int i;
	printf("pushing elements into the stack.....\n");
	for(i=1;i<=10;i++)
	{
		printf("%d\n",i);
		push(i);
	}
	printf("poping elements from stack...\n");
	for(i=0;i<10;i++)
	{
		//istop();
		pop();
	}
	//istop();
		
}
