//
//  QuickSort.c
//  SortAlgorithm
//
//  Created by jinglin sun on 2020/8/2.
//  Copyright © 2020 jinglin sun. All rights reserved.
//

#include "QuickSort.h"

int locateSortedIndex(int a[], int left, int right) {
    int  i = left, j = right, target = a[left];
    while (i < j) {
        // 从右至左填坑
        while (j > i && a[j] >= target) {
            j--;
        }
        
        if (j > i) {
            a[i++] = a[j];
        }
        
        // 从左至右填坑
        while (j > i && a[i] <= target) {
            i++;
        }
        
        if (j > i) {
            a[j--] = a[i];
        }
    }
    
    a[i] = target;
    return i;
}

void quickSort(int a[], int left, int right) {
    if (left < right) {
        int k = locateSortedIndex(a, left, right);
        quickSort(a, left, k - 1);
        quickSort(a, k + 1, right);
    }
}
