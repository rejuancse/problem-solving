//
//  main.c
//  pb-11547
//
//  Created by Rejuan on 1/6/25.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int t, n;
    scanf("%d\n", &t);
    
    while (t--) {
        
        scanf("%d\n", &n);
        
        int result = ( ( ( ( n * 567 ) / 9 + 7492 ) * 235 ) / 47 ) - 498;
        result = ( abs(result) / 10 ) % 10;
        
        printf("%d\n", result);
    }
    
    return 0;
}
