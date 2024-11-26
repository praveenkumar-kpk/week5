#include<stdio.h>
int main()
{
	int n,i,b,j,l;
	printf("enter no of array elements,k");
	scanf("%d%d",&n,&l);
	int k[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&k[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		if(k[j]>k[j+1])
		{
			b=k[j];
			k[j]=k[j+1];
			k[j+1]=b;
		}
	
	}
	printf("%d\n%d\n",k[l-1],k[n-l]);
	
	return 0;
}
