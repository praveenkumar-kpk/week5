#include<stdio.h>
int main()
{
	int n,i,j,sum;
	printf("enter no of array elements,sum");
	scanf("%d%d",&n,&sum);
	int k[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&k[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		if(k[i]+k[j]==sum)
		printf("%d %d\n",k[i],k[j]);
	}
	
	return 0;
}
