#include <stdio.h>
int main() {
    int n, i, pos;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n]; 
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);
    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
    } else {
        for (i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;  
        printf("\nArray after deletion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
