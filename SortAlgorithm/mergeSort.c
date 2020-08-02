//
//  mergeSort.c
//  SortAlgorithm
//
//  Created by jinglin sun on 2020/8/2.
//  Copyright © 2020 jinglin sun. All rights reserved.
//

#include <stdlib.h>
#include "mergeSort.h"


void mergeSorted(int a[], int left, int right) {
    int mid = (left + right) / 2;
    int i = left, j = mid + 1, k = 0;
    int *result = (int*)calloc(right - left + 1, sizeof(int));
    while (i <= mid && j <= right) {
        if (a[i] <= a[j]) {
            result[k++] = a[i++];
        } else {
            result[k++] = a[j++];
        }
    }
    
    while (i <= mid) {
        result[k++] = a[i++];
    }
    
    while (j <= right) {
        result[k++] = a[j++];
    }
    
    
    for (int i = 0; i < k; i++) {
        a[left + i] = result[i];
    }
    
    free(result);
}

void mergeSort(int a[], int left, int right) {
    if (right > left) {
        int mid = (left + right) / 2;
        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);
        mergeSorted(a, left, right);
    }
}
