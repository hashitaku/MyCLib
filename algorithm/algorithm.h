#ifndef MYCLIB_ALGORITHM_H
#define MYCLIB_ALGORITHM_H

#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap(int *, int *);

int max(int, int);

int min(int, int);

int compare(const int *, const int *);

int median_3(int, int, int);

int average_3(int, int, int);

unsigned int reversed(unsigned int);

void partition(int *, int, int);

int is_up_sorted(int *, int);

int is_down_sorted(int *, int);

void bubble_sort(int *, int);

void odd_even_sort(int *, int);

void selection_sort(int *, int);

void insertion_sort(int *, int);

void quick_sort_up(int *, int, int);

void quick_sort_down(int *, int, int);

int *linear_search(int *, int, int);

int *binary_search(int *, int , int);
 
int accumelate(int *, int *, int);

int gcd(int, int);

int lcm(int, int);

char *rotate(char *, char *, char *);

#endif //MYCLIB_ALGORITHM_H
