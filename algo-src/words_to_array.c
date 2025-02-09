//
// Created by samandar on 2/9/25.
//

#include "../include/words_to_array.h"
#include <stdlib.h>
#include <string.h>
//#include <stdio.h>

size_t count_words (const char *words)
{
// count the number of words
// this function will be used to allocate the right amount of memory so it has to be correct !
    size_t res = 0;
    int inWord = 0;
    for(int i = 0; words[i]!='\0'; i++) {
        if(words[i]==' ') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            res++;
        }
    }
    return res;
}

void words_to_array (const char *words, char *words_array[])
{
// allocate the words on the heap, they will be freed
// write them to the pre-allocated words_array
    size_t idx = 0;
    const char *start = words;

    while(*words) {
        if(*words==' ') {
            size_t len = words - start;
            words_array[idx] = (char*)calloc(len+1, 1);
            strncpy(words_array[idx], start, len);
            words_array[idx][len] = '\0';
            idx++;
            start = words + 1;
        }
        words++;
    }

    if(start!=words && *words == '\0') {
        size_t len = words - start;
        words_array[idx] = (char*)calloc(len+1, 1);
        strncpy(words_array[idx], start, len);
        words_array[idx][len] = '\0';
    }
}