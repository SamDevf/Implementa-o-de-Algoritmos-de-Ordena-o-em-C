#include <stdio.h>

void merge(int arr[], int l, int m, int r) {
    int i = l, j = m+1, k = 0;
    int temp[r-l+1];

    while(i <= m && j <= r) {
        if(arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while(i <= m) temp[k++] = arr[i++];
    while(j <= r) temp[k++] = arr[j++];

    for(i = l, k = 0; i <= r; i++, k++)
        arr[i] = temp[k];
}

void mergeSort(int arr[], int l, int r) {
    if(l < r) {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {8, 4, 6, 2, 10};
    int n = 5;

    printf("Antes:\n");
    printArray(arr, n);

    mergeSort(arr, 0, n-1);

    printf("Depois:\n");
    printArray(arr, n);

    return 0;
}