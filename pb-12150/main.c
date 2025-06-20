//
//  main.c
//  pb-12150
//
//  Created by Rejuan on 14/6/25.
//

#include <stdio.h>
#include <string.h>

int main() {
    int N;

    while (scanf("%d", &N) && N != 0) {
        int result[1000];
        char filled[1000];  // use char for faster memset
        memset(filled, 0, sizeof(filled));
        int valid = 1;

        int car, posDiff;

        // temporary storage for deferred input
        int cars[1000];
        int diffs[1000];

        for (int i = 0; i < N; i++) {
            scanf("%d %d", &cars[i], &diffs[i]);
        }

        for (int i = 0; i < N; i++) {
            car = cars[i];
            posDiff = diffs[i];

            int startPos = i - posDiff;

            if (startPos < 0 || startPos >= N || filled[startPos]) {
                valid = 0;
                break;
            }

            result[startPos] = car;
            filled[startPos] = 1;
        }

        if (!valid) {
            printf("-1\n");
        } else {
            for (int i = 0; i < N; i++) {
                if (i > 0) printf(" ");
                printf("%d", result[i]);
            }
            printf("\n");
        }
    }

    return 0;
}
