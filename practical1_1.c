#include<stdio.h>
void accept(int a[],int n)
{
	int i;
	printf("\n%d ele insert in array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
int linear(int a[],int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			return 1;
		}
	}
	return 0;
}
void main()
{
	int a[20],n,key;
	printf("enter how many element you have store in array:\n");
	scanf("%d",&n);
	accept(a,n);
	printf("show array:\n");
	display(a,n);
	printf("\nenter ele to search in array:");
	scanf("%d",&key);
	int p=linear(a,n,key);
	if(p==1)
	{
		printf("\nElement is present in array");
	}
	else{
		printf("Element ino present in array");
	}
}
