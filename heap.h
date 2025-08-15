#ifndef HEAP_H
#define HEAP_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Build an maxheap from a array
void maxheap(int* array, int size);
bool insert(int *heap, int value);
// Get max value in a heap, just return the value
int get_max(int *heap);
// Get the index of a value in a heap
int get_index(int* heap, int value);
// Extract max value in a heap, remove and return the value
int extract_max(int *heap);
// Update value in a heap
void update(int* heap, int old_value, int value);
// Make the "swap" for up/down in the values of a heap
void swap_up(int* heap, int index_value);
void swap_down(int* heap, int index_value);
// Make the heapsort in a array
int *heap_sort(int *array);

#endif