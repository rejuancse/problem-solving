//
//  main.c
//  pb-11044
//
//  Created by Rejuan on 1/6/25.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
    int t, n, m;

    scanf("%d", &t);

    while (t--)
    {
        scanf("%d %d", &n, &m);

        int row_col = ceil((n - 2) / 3.0) * ceil((m - 2) / 3.0);

        printf("%d\n", row_col);
    }

    return 0;
}
