#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;

    int i = 0;
int j;
    for (j = 1; j < n; j++) {
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

int main() {
    int n;
    int i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];  // assuming max size = 100

    printf("Enter %d sorted elements:\n", n);
    
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k = removeDuplicates(arr, n);

    printf("Unique count: %d\n", k);
    printf("Array after removing duplicates: ");

    for ( i = 0; i < k; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

