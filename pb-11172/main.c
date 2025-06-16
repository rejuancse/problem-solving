//
//  main.c
//  pb-11172
//
//  Created by Rejuan on 1/6/25.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int t;
    long long a, b;

    scanf("%d", &t);

    while (t--)
    {
        scanf("%lld %lld", &a, &b);

        printf("%c\n", (a > b) ? '>' : ((a < b) ? '<' : '='));
    }

    return 0;
}
