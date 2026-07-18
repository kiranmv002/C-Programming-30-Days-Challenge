#include <stdio.h>

int main() {

    int arr[] = {1,2,3,2,4,1,2,5};
    int n = 8;
    int visited[8] = {0};

    for(int i = 0; i < n; i++) {

        if(visited[i])
            continue;

        
