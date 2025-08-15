#include "heap.h"

int main()
{
    int num[] = {100, 2, 7, 3, 17, 25, 1, 36, 19};
    int len = sizeof(num) / sizeof(num[0]);
    
    heap_sort(num, len);
    
    for (int i = 0; i < len; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
}