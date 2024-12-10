#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];  
    printf("Enter %d elements for the first array:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]); 
    }
    for (i = 0; i < n; i++) {
        arr2[i] = arr1[i];  
    }
    printf("\nElements of the first array:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, arr1[i]);
    }
    printf("\nElements of the second array (after copying):\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, arr2[i]);
    }
    return 0;
}
