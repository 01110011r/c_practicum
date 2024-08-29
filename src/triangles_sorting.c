//
// Created by samandar on 8/27/24.
//
//HackerRank C problem "small-triangle-large-triangle" solution

#include "../include/triangles_sorting.h"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//struct triangle
//{
//    int a;
//    int b;
//    int c;
//};

typedef struct triangle triangle;

double calculate_by_heron(triangle *tr) {
    double p = (tr->a + tr->b + tr->c) / 2.0; // Divide by 2.0 for accurate float division
    double sub1 = p - tr->a;
    double sub2 = p - tr->b;
    double sub3 = p - tr->c;
//    printf("p: %f, sub1: %f, sub2: %f, sub3: %f\n", p, sub1, sub2, sub3);

    double S = sqrt(p * sub1 * sub2 * sub3);
//    printf("S: %f\n", S);
    return S;
}

void sort_by_area(triangle* tr, int n) {
    /**
    * Sort an array a of the length n
    */

    for(int i=0; i<n-1; i++) {
        printf("i: %d\n", i);
        for(int j=i+1; j<n; j++) {
            printf("j: %d\n", j);
            if (calculate_by_heron(&tr[i])>calculate_by_heron(&tr[j])) {
                printf("swap\n");
                triangle swap=tr[i];
                tr[i]=tr[j];
                tr[j]=swap;
            }
        }

    }
}