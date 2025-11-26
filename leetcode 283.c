#include <stdio.h>

void moveZeroes(int arr[], int n) {
    int i = 0; 
int j;
    for ( j = 0; j < n; j++) {
        if (arr[j] != 0) {
            arr[i] = arr[j];
            i++;
        }
    }

    
    for (; i < n; i++) {
        arr[i] = 0;
    }
}

int main() {
    int n;
int i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];  

    printf("Enter %d elements:\n", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    moveZeroes(arr, n);

    printf("Array after moving zeroes: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

