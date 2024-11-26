#include<stdio.h>
int main()
{
	int n,i,j,sum,m;
	printf("enter no of array elements,sum");
	scanf("%d%d",&n,&sum);
	int k[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&k[i]);
	}
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
		for(m=j+1;m<n;m++)
		{
		 if(k[i]+k[j]+k[m]==sum)
		printf("%d %d %d\n",k[i],k[j],k[m]);
	}}
	
	return 0;
}
