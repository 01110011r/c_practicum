//
// Created by samandar on 8/25/24.
//
//HackerRank C Bitwise Operators problem solution

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "../include/bitwise_operators.h"

//Complete the following function.   1-->>>>>>>>>>>>>>>>>>
void calculate_the_maximum(int n, int k) {
    //Write your code here.
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;

    for(int a = 1; a<n; a++) {
        for(int b = a + 1; b<=n; b++) {

            if((a&b)<k&&(a&b)>max_and) {
                max_and = (a&b);
            }

            if((a|b)<k&&(a|b)>max_or) {
                max_or = (a|b);
            }

            if((a^b)<k&&(a^b)>max_xor) {
                max_xor = (a^b);
            }

        }
    }

    // show result
    printf( "result: %d\n%d\n%d",max_and,max_or,max_xor);
}
///////////// 1--<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<