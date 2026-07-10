#include <stdio.h>

int main() {

    int arr[] = {50, 30, 70, 20, 40, 60, 80};
    int n = 7;

    int min = arr[0];
    int max = arr[0];

    for(int i = 1; i < n; i++) {

        if(arr[i] < min)
            min = arr[i];

        if(arr[i] > max)
            max = arr[i];
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    return 0;
}
