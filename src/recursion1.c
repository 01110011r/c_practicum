//
// Created by samandar on 9/20/24.
//
//HackerRank C Recursion 1 problem solution

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "../include/recursion1.h"
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
    //Write your code here.
    int s=a+b+c;
    if(n<=1) {
        return a;
    }
    return find_nth_term(--n, b, c, s);
}
