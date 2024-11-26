#include<stdio.h>
int main()
{
	int n,i,s=0,j;
	printf("enter no of array elements");
	scanf("%d",&n);
	int k[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&k[i]);
		
	}
	for(i=0;i<n;i++)
	s=s+k[i];
	printf("%d",(n+2)*(n+1)/2-s);
		
	return 0;
}
