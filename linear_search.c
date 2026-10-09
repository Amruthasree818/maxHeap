
#include <stdio.h>

int main()
{
    int scores[] = {78, 92, 65, 88, 95, 72, 84, 90};
    int max = scores[0];
    int comparisons = 0;

    for (int i = 1; i < 8; i++)
    {
        comparisons++;

        if (scores[i] > max)
            max = scores[i];
    }

    printf("LINEAR SEARCH\n");
    printf("Highest score using Linear Search: %d\n", max);
    printf("Linear Search comparisons: %d\n", comparisons);

    return 0;
}