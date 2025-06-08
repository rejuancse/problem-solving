//
//  main.c
//  pb-10038
//
//  Created by Rejuan on 8/6/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char *argv[])
{
    int n, i;
    int sequence[3000];

    while (scanf("%d", &n) == 1)
    {
        int diffs[3000] = {0};
        for (i = 0; i < n; i++)
        {
            scanf("%d", &sequence[i]);
        }

        for (i = 0; i < n - 1; i++)
        {
            int diff = abs(sequence[i] - sequence[i + 1]);
            (diff >= 1 && diff < n) ? (diffs[diff] = 1) : 0;
        }

        int jolly = 1;
        for (i = 1; i < n; i++)
        {
            if (diffs[i] == 0)
            {
                jolly = 0;
                break;
            }
        }

        printf(jolly ? "Jolly\n" : "Not jolly\n");
    }

    return 0;
}
