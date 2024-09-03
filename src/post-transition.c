//
// Created by samandar on 9/3/24.
//
//HackerRank Post Transition problem solution
#include "../include/post-transition.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STRING_LENGTH 6

void print_all_packages(town t) {
    printf("%s:", t.name);
    for(int i = 0; i<t.offices_count; i++) {
        printf("\t%d:", i);
        for(int j = 0; j<t.offices[i].packages_count; j++) {
            printf("\t\t%s\n", t.offices[i].packages[j].id);
        }
    }
}

void send_all_acceptable_packages(town* source, int source_office_index, town* target, int target_office_index) {
    int acceptable_packages_count = 0;
    for(int i = 0; i<source->offices[source_office_index].packages_count; i++){
        int weight = source->offices[source_office_index].packages[i].weight;
        if(weight<=target->offices[target_office_index].max_weight&&weight>=target->offices[target_office_index].min_weight) {
        } else {
//            source->offices[source_office_index].

        }
    }
}

town town_with_most_packages(town* towns, int towns_count) {
    town result = towns[0];
    int max=0;
    for(int i=0; i<towns_count; i++){
        int packages_counter=0;
        for(int j=0; j<towns[i].offices_count; j++){
            packages_counter+=towns[i].offices[j].packages_count;
        }
        if(packages_counter>max) {
            max=packages_counter;
            result = towns[i];
        }
    }

    return result;
}

town* find_town(town* towns, int towns_count, char* name) {
    //I started working here
    town* result = null;
    for(int i=0; i<towns_count; i++)
        if(strcmp(towns[i].name, name) == 0) {
            result = &towns[i];
            break;
        }
    return result;
}
