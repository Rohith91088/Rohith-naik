#include <stdio.h>
int main() {
    int n, i, j, isDuplicate;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n]; 
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nUnique elements in the array are:\n");
    for (i = 0; i < n; i++) {
        isDuplicate = 0;
        for (j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isDuplicate = 1;  
                break;
            }
        }
        if (!isDuplicate) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}
