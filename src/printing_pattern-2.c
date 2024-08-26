//
// Created by samandar on 8/26/24.
//
//HackerRank C Printing Pattern-2 problem solution

#include <stdio.h>
#include "../include/printing_pattern-2.h"

void PrintingPattern2(int n) {
    // Complete the code to print the pattern.

    int x = n;
    for(int i = 1; i < 2*n; i++) {
        x=n;
        for(int j = 1; j<2*n; j++) {
            if((i<=n&&i>=j||i>n&&2*n-i>=j)&&j<=n&&i!=1&&j!=1) {
                x--;
            } else if (j>n&&(i<=n&&2*n-i<j||i>n&&i<j)) {
                x++;
            }
            if (j==(2*n-1)) {
                printf("%d\n",x);
            } else {
                printf("%d ",x);
            }
        }
    }
}
