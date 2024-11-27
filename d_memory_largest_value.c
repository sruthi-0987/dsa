#include <stdio.h>
#include<stdlib.h>

int main() {
    int i, n, max;

   
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    
    int *arr = (int*)malloc(n * sizeof(int));

    
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    max = arr[0];

    
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The largest number is %d\n", max);

    
    

    return 0;
}
