#include <stdio.h>

int main() {
    int n, i, l, p;

    printf("Enter the number of elements in the sorted : ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {

        scanf("%d", &arr[i]);
    }

    printf("Enter the value to insert: ");
    scanf("%d", &l);

    for (i = 0; i < n; i++) {
        if (l < arr[i]) {
            p = i;
            break;
        }
    }

    for (i = n; i > p; i--) {
        arr[i] = arr[i - 1];
    }

    arr[p] = l;

    printf("Updated array:\n");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

