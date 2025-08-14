#ifndef HEAP_H
#define HEAP_H

#include <stdio.h>
#include <stdlib.h>

// Build an heap from a array
int* build(int* array);
bool insert(int *heap, int value);
// Get min/max value in a heap, just return the value
int get_min(int *heap);
int get_max(int *heap);
// Extract min/max value in a heap, remove and return the value
int extract_min(int *heap);
int extract_max(int *heap);



#endif