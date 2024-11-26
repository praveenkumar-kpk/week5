#include <stdio.h>

int main() {
    int n, i, j, c;

    printf("Enter the number: ");
    scanf("%d", &n);

    int arr[n], freq[n];

    printf("Enter elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    
    }

    for (i = 0; i < n; i++)
	 {
        c = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                c++;
                freq[j] = 0; 
            }
        }
        if (freq[i] != 0) 
            freq[i] = c;        
    }
    printf("Element  Frequency\n");

    for (i = 0; i < n; i++) {
        if (freq[i] != 0) 
		
            printf("   %d  %d\n", arr[i], freq[i]);
        
    }

    return 0;
}

