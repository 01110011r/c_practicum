//
// Created by samandar on 8/27/24.
//
//HackerRank C problem "small-triangle-large-triangle" solution

#ifndef CPRACTICUM_TRIANGLES_SORTING_H
#define CPRACTICUM_TRIANGLES_SORTING_H

struct triangle {
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;

void sort_by_area(triangle* tr, int n);
#endif //CPRACTICUM_TRIANGLES_SORTING_H
