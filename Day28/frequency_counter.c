#include <stdio.h>

int main() {

    int arr[] = {1,2,3,2,4,1,2,5};
    int n = 8;
    int visited[8] = {0};

    for(int i = 0; i < n; i++) {

        if(visited[i])
            continue;

        int count = 1;

        for(int j = i + 1; j < n; j++) {

            if(arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d occurs %d times\n", arr[i], count);
    }

    return 0;
}
