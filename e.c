#include<stdio.h>
void main()
{
	int n,i,j,k=0,t,s,d;
	printf("Enter no of states\n");
	scanf("%d",&n);
	printf("Enter the transitions\n");
	scanf("%d",&t);
	printf("Enter source destination\n");
	for(i=0;i=t;i++)
	{
		scanf("%d %d",&s,&d);
	}
	for(i=0;i<n;i++)
	{
		printf("E closure of q%d = {");
		for(j=k;j<n;j++)
		{
			printf("q%d",j);
		}
		k = k+1;
		printf("}\n");
	}
}
