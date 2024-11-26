#include<stdio.h>
int main()
{
	int n,i,b,j,c=0;
	printf("enter no of array elements,no");
	scanf("%d%d",&n,&b);
	int k[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&k[i]);
	}
	for(i=0;i<n;i++)
	if(k[i]==b)
	c++;
		printf("%d\n",c);
		
	
	
	return 0;
}
