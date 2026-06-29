#include <stdio.h>

int main() {

    int arr[] = {15, 8, 22, 4, 19};
    int n = 5;

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {

            if(arr[i] < arr[j]) {

                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }
        }
    }

    printf("Descending Order:\n");

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
