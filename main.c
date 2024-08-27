#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//#################
#include "include/bitwise_operators.h"
#include "include/printing_pattern-2.h"
#include "include/triangles_sorting.h"

int main() {

    //triangle sorting  3-->>>>>>>>>>>>>>>>>>>>
    int n;
    scanf("%d", &n);
//    struct triangle {
//        int a;
//        int b;
//        int c;
//    };

    triangle *tr = malloc(n * sizeof(triangle));
    for (int i = 0; i < n; i++) {
        scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
    }
    sort_by_area(tr, n);
    for (int i = 0; i < n; i++) {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }
    //triangle sorting 3--####################

    //printing pattern-2   2-->>>>>>>>>>>>>>>>>>
//    int n1;
//    scanf("%d", &n1);
//    PrintingPattern2(n1);
    //printing pattern-2   2--##################


    //bitwise_operators  1-->>>>>>>>>>>>>>>>>>
//    int n = 3, k = 2;
//
////    scanf("%d %d", &n, &k);
//    calculate_the_maximum(n, k);

    return 0;
}
