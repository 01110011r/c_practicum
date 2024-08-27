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

double calculate_by_heron(triangle* tr) {
    float p = (tr->a+tr->b+tr->c)/2;
    double S = sqrt(p*(p-tr->a)*(p-tr->b)*(p-tr->c));
    return S;
}

void sort_by_area(triangle* tr, int n) {
    /**
    * Sort an array a of the length n
    */

    for(int i=0; i<n-1; i++) {

        for(int j=i+1; j<n; j++) {
            if (calculate_by_heron(&tr[i])>calculate_by_heron(&tr[j])) {
                triangle swap=tr[i];
                tr[i]=tr[j];
                tr[j]=swap;
            }
        }

    }
}