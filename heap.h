#ifndef HEAP_H
#define HEAP_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Heap
{
    int* heap;
    int size;
} Heap;

// Build an maxheap from a array
Heap heapify(int* array, int size);
// Extract max value in a heap, remove and return the value
int extract_max(Heap *heap);
void swap_down(Heap heap, int index_value);
// Make the heapsort in a array
void heap_sort(int *array, int len);

#endif