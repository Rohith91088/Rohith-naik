#include <stdio.h>
int main() {
    int n, i, j, count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n]; 
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++; 
                break;   
            }
        }
    }
    printf("\nNumber of duplicate elements in the array: %d\n", count);
    return 0;
}
