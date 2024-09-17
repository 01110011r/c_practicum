//
// Created by samandar on 9/17/24.
//
//HackerRank C Reverse Array problem solution

#include <stdio.h>
#include <stdlib.h>
#include "../include/reverse-array.h"

void reverseArray() {
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    for(int i=0; i<num/2; i++) {
        if(i>=num-i) break;
        int swap = arr[i];
        arr[i]=arr[num-i-1];
        arr[num-i-1]=swap;
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
}