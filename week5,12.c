#include<stdio.h>
int main()
{
	int n,i,j,c;
	printf("enter no of array elements");
	scanf("%d",&n);
	int k[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&k[i]);
	}
	for(i=0;i<n-1;i++)
	{
		c=0;
		for(j=i+1;j<n;j++)
		{
		 
		 if(k[i]==k[j])
		 c++;
		 
	}
	if(c==0)
	goto s;
	}
	s:
	printf("%d",k[i]);
	
	return 0;
}
