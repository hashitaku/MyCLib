#ifndef MYCLIB_VECTOR_H
#define MYCLIB_VECTOR_H

#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include<stdbool.h>

typedef int T;

typedef struct{
    T *data;
    size_t size;
    size_t top;
}Vector;

int vector_init(Vector *ptr_struct);

int vector_free(Vector *ptr_struct);

int vector_clear(Vector *ptr_struct);

int vector_add_size(Vector *ptr_struct, size_t add_size);

int vector_resize(Vector *ptr_struct, size_t chenge_size);

bool vector_is_full(const Vector *ptr_struct);

int vector_push_back(Vector *ptr_struct, T input);

size_t vector_size(const Vector *ptr_struct);

size_t vector_capacity(const Vector *ptr_struct);

T *vector_at(Vector *ptr_struct, size_t n);

T vector_dot(const Vector *ptr_struct1, const Vector *ptr_struct2);

#endif //MYCLIB_VECTOR_H
