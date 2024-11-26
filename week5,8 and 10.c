#include <stdio.h>

int main() {
    int i,j,k,n,c=0;
    printf("enter the number of elements:")
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<n-1-c;i++)
	{
    for(j=i+1;j<n-c;j++)
    {
        if(a[i]==a[j])
        {
        	printf("%d\n",a[i]);
        	
            for(k=j;k<n-c-1;k++)
            a[k]=a[k+1];
            a[n-c-1]=0;
            c++;
        }
        
     }
	}
    for(i=0;i<n-c;i++)
    printf("%d ",a[i]);
    

    return 0;
}
