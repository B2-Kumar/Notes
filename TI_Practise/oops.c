#include <stdio.h>
#include <stdlib.h>

void solve(int **arr, int *a){
    for(int i = 0;i < 5;i++){
        for(int j = 0;j < 4;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for(int i = 0;i < 5;i++){
        printf("%d ", a[i]);
    }
}

int main(){
    // int *arr[5];
    int** arr = (int **) malloc(5 * sizeof(int *));

    for(int i = 0; i < 5; i++) {
        printf("%d ", *arr[i]);
    }
    printf("\n");

    for(int i = 0;i < 8;i++){
        arr[i] = (int *)(calloc(4, sizeof(int)));
    }
    int * a = (int*)(malloc(5 * sizeof(int)));
    solve(arr, a);
    return 0;
}