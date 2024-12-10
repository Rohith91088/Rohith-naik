#include <stdio.h>
int main() {
    int n, i, value, position;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the value to insert: ");
    scanf("%d", &value);
    for (i = n - 1; (i >= 0 && arr[i] > value); i--) {
        arr[i + 1] = arr[i]; 
    }
    arr[i + 1] = value;
    printf("\nArray after insertion:\n");
    for (i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
