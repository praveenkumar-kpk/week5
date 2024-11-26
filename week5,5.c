#include<stdio.h>
int main()
{
	int n,i,b,j;
	printf("enter no of array elements");
	scanf("%d",&n);
	int k[n];
	for(i=0;i<n;i++)
	scanf("%d",&k[i]);
		for(j=0;j<n/2;j++)
		{
			b=k[j];
			k[j]=k[n-1-j];
			k[n-1-j]=b;	
		}
	
	
	for(i=0;i<n;i++)
	{
		
		printf("%d\t",k[i]);
		
	}
	
	return 0;
}
