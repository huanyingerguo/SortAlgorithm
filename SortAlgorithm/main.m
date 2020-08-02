//
//  main.m
//  SortAlgorithm
//
//  Created by jinglin sun on 2020/8/2.
//  Copyright © 2020 jinglin sun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "mergeSort.h"
#import "QuickSort.h"

void printArray(int a[], NSString *prefix) {
    NSMutableString *str = [NSMutableString new];
    for (int i = 0; i < 10; i++) {
        [str appendFormat:@"%d", *a++];
    }
    NSLog(@"%@：str=%@", prefix, str);
}

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        int a[10] = {9, 3, 7, 1, 2, 6, 5, 4, 8, 0};
        printArray(a, @"排序前");
        
        mergeSort(a, 0, 9);
        printArray(a, @"merge排序后");
        
        int b[10] = {9, 3, 7, 1, 2, 6, 5, 4, 8, 0};
        quickSort(b, 0, 9);
        printArray(b, @"quick排序后");

    }
    return 0;
}
