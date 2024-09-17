//
// Created by samandar on 9/17/24.
//
//HackerRank C Printing Tokens problem solution

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "../include/printing-tokens.h"

void printingTokens() {
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    for(int i=0; s[i]!='\0'; i++) {
        if(s[i]==' ') printf("\n");
        else printf("%c",s[i]);
    }
    free(s);
}