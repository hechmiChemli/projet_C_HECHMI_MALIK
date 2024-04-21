#ifndef COLUMN_H
#define COLUMN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for a column
typedef struct {
    char *title;         // Title of the column
    int *data;           // Pointer to integer array
    int capacity;
    unsigned int size;   // Logical size of the column
    unsigned int max_size;// Physical size of the array
} Column;

// Function declarations
Column *create_column(const char *title);
void insert_value(Column *column, int value);
void print_col(const Column *column);
void delete_column(Column **column);

// Additional functionality
int count_value(const Column *column, int value); // Counts occurrences of a value
int value_at_index(const Column *column, unsigned int index); // Returns the value at a given index
int find_max(const Column *column); // Finds the maximum value in the column
int count_less_than(const Column *column, int x); // Finds the values less than x
int count_equals_x(const Column *column, int x);  // Finds the values equal to x

#endif