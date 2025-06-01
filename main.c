#include <stdio.h>

int cycle_length(int n) {
    int count = 1;

    while (n != 1) {
        n = (n % 2 == 1) ? 3 * n + 1 : n / 2;
        
        count++;
    }

    return count;
}

int main(int argc, const char * argv[]) {
    int i, j;
    
    while (scanf("%d %d", &i, &j) == 2) {
        int low = i < j ? i : j;
        int high = i > j ? i : j;
        int max_cycle = 0;
        
        int k;
        for(k = low; k <= high; k++) {
            if(cycle_length(k) > max_cycle) {
                max_cycle = cycle_length(k);
            }
        }
        
        printf("%d %d %d\n", i, j, max_cycle);
    }
    
    return 0;
}
