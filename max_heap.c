
#include <stdio.h>

int heap[20], n = 0, comparisons = 0;

void insertHeap(int value)
{
    int i = n;
    heap[n++] = value;

    while (i > 0)
    {
        int parent = (i - 1) / 2;
        comparisons++;

        if (heap[parent] < heap[i])
        {
            int temp = heap[parent];
            heap[parent] = heap[i];
            heap[i] = temp;
            i = parent;
        }
        else
            break;
    }
}

int main()
{
    int scores[] = {78, 92, 65, 88, 95, 72, 84, 90};
    int i;

    printf("MAX HEAP INSERTION\n");

    for (i = 0; i < 8; i++)
    {
        int before = comparisons;
        insertHeap(scores[i]);

        printf("After inserting %d: [ ", scores[i]);
        for (int j = 0; j < n; j++)
            printf("%d ", heap[j]);

        printf("] Comparisons: %d\n", comparisons - before);
    }

    printf("\nHighest score using Max Heap: %d\n", heap[0]);
    printf("Heap insertion comparisons: %d\n", comparisons);

    return 0;
}