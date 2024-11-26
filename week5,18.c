#include <stdio.h>

int main() {
    int n, i, j=0, t, x=0, z=0,y;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n],b[n],c[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
    
		
        if(arr[i]%2==0)
        {
        	b[j]=arr[i];
        	x++;
        	j++;
		}
        else
        {
        	c[j]=arr[i];
        	z++;
        	y++;
		}
	
    }

    printf("even elements in array :\n");
    for (i = 0; i < n-z; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
    
    printf("odd elements in array :\n");
    for (i = 0; i < n-x; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}



