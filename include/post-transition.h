//
// Created by samandar on 9/3/24.
//

struct package
{
    char* id;
    int weight;
};

typedef struct package package;

struct post_office
{
    int min_weight;
    int max_weight;
    package* packages;
    int packages_count;
};

typedef struct post_office post_office;

struct town
{
    char* name;
    post_office* offices;
    int offices_count;
};

typedef struct town town;




#ifndef CPRACTICUM_POST_TRANSITION_H
#define CPRACTICUM_POST_TRANSITION_H
void print_all_packages(town t);
void send_all_acceptable_packages(town* source, int source_office_index, town* target, int target_office_index);
town town_with_most_packages(town* towns, int towns_count);
town* find_town(town* towns, int towns_count, char* name);
#endif //CPRACTICUM_POST_TRANSITION_H
