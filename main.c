#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//#################
#include "include/bitwise_operators.h"
#include "include/printing_pattern-2.h"
#include "include/triangles_sorting.h"
#include "include/post-transition.h"
#include "include/reverse-array.h"
#include "include/printing-tokens.h"
#include "include/recursion1.h"

int main() {

    //recursion1    8-->>>>>>>>>>>>>>>>>>
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    //recursion1    8--##################

    //dynamic array in C 7-->>>>>>>>>>>>>>>>>>
//    https://www.hackerrank.com/challenges/dynamic-array-in-c/problem?isFullScreen=true
    //dynamic array in C 7--##################

    //printing tokens  6-->>>>>>>>>>>>>>>>>>
//    printingTokens();
    //printing tokens  6--##################

    //reverse-array  5-->>>>>>>>>>>>>>>>>>
//    reverseArray();
    //reverse-array  5--##################


    //post-transition  4-->>>>>>>>>>>>>>>>>>
//    int towns_count;
//    scanf("%d", &towns_count);
//    town* towns = malloc(sizeof(town)*towns_count);
//    for (int i = 0; i < towns_count; i++) {
//        towns[i].name = malloc(sizeof(char) * MAX_STRING_LENGTH);
//        scanf("%s", towns[i].name);
//        scanf("%d", &towns[i].offices_count);
//        towns[i].offices = malloc(sizeof(post_office)*towns[i].offices_count);
//        for (int j = 0; j < towns[i].offices_count; j++) {
//            scanf("%d%d%d", &towns[i].offices[j].packages_count, &towns[i].offices[j].min_weight, &towns[i].offices[j].max_weight);
//            towns[i].offices[j].packages = malloc(sizeof(package)*towns[i].offices[j].packages_count);
//            for (int k = 0; k < towns[i].offices[j].packages_count; k++) {
//                towns[i].offices[j].packages[k].id = malloc(sizeof(char) * MAX_STRING_LENGTH);
//                scanf("%s", towns[i].offices[j].packages[k].id);
//                scanf("%d", &towns[i].offices[j].packages[k].weight);
//            }
//        }
//    }
//    int queries;
//    scanf("%d", &queries);
//    char town_name[MAX_STRING_LENGTH];
//    while (queries--) {
//        int type;
//        scanf("%d", &type);
//        switch (type) {
//            case 1:
//                scanf("%s", town_name);
//                town* t = find_town(towns, towns_count, town_name);
//                print_all_packages(*t);
//                break;
//            case 2:
//                scanf("%s", town_name);
//                town* source = find_town(towns, towns_count, town_name);
//                int source_index;
//                scanf("%d", &source_index);
//                scanf("%s", town_name);
//                town* target = find_town(towns, towns_count, town_name);
//                int target_index;
//                scanf("%d", &target_index);
//                send_all_acceptable_packages(source, source_index, target, target_index);
//                break;
//            case 3:
//                printf("Town with the most number of packages is %s\n", town_with_most_packages(towns, towns_count).name);
//                break;
//        }
//    }
    //post-transition  4--##################

    //triangle sorting  3-->>>>>>>>>>>>>>>>>>>>
//    int n;
//    scanf("%d", &n);
//
//    triangle *tr = malloc(n * sizeof(triangle));
//    for (int i = 0; i < n; i++) {
//        scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
//    }
//    sort_by_area(tr, n);
//    for (int i = 0; i < n; i++) {
//        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
//    }
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
