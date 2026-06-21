#include <stdio.h>

void quickSort(int arr[], int low, int high) {

    if(low < high) {

        int pivot = arr[high];
        int i = low - 1;

        for(int j = low; j < high; j++) {

            if(arr[j] > pivot) {

                i++;

                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

