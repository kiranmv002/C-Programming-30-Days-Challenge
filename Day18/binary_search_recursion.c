#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {

    if(low > high)
        return -1;

    int mid = (low + high) / 2;

    if(arr[mid] == key)
        return mid;
    else if(arr[mid] < key)
        return binarySearch(arr, mid + 1, high, key);
    else
        return binarySearch(arr, low, mid - 1, key);
}

int main() {
    int arr[] = {2,4,6,8,10};
    int key = 6;

    int result = binarySearch(arr, 0, 4, key);

    if(result != -1)
        printf("Found at index %d\n", result);
    else
        printf("Not found\n");

    return 0;
}
