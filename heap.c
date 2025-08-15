#include "heap.h"
void swap_down(Heap heap, int index_value)
{
    int left = 2 * index_value + 1;
    int right = 2 * index_value + 2;
    
    while ((left < heap.size && heap.heap[left] > heap.heap[index_value]) ||
           (right < heap.size && heap.heap[right] > heap.heap[index_value]))
    {
        int bigger;
        
        if (right >= heap.size || heap.heap[left] > heap.heap[right])
            bigger = left;
        else
            bigger = right;
        
        int temp = heap.heap[index_value];
        heap.heap[index_value] = heap.heap[bigger];
        heap.heap[bigger] = temp;

        index_value = bigger;
        left = 2 * index_value + 1;
        right = 2 * index_value + 2;
    }
}

Heap heapify(int *array, int size)
{
    Heap heap;
    heap.heap = array;
    heap.size = size;   
    for (int i = (size / 2) - 1; i >= 0; i--)
    {
        swap_down(heap, i);
    }
    return heap;
}

int extract_max(Heap *heap)
{
    if (heap->size == 0)
    {
        return -1;
    }
    int maxval = heap->heap[0];
    heap->heap[0] = heap->heap[heap->size - 1];
    heap->size--;
    swap_down(*heap, 0);
    return maxval;
}

void heap_sort(int *array, int size)
{
    Heap heap = heapify(array, size);
    for (int i = size - 1; i >= 0; i--)
    {
        int maxval = extract_max(&heap);
        array[i] = maxval;  // coloca o maior no final
    }
}