#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    uint i = 0;
    ulong x;
    // ulong y;
    // ulong z;
    printf("i 0x%lx | %u | 0x%x\n", &i, i, i);
    printf("x 0x%lx | %lu | 0x%lx\n", &x, x, x);
    // printf("y 0x%lx | %lu | 0x%lx\n", &y, y, y);
    // printf("z 0x%lx | %lu | 0x%lx\n", &z, z, z);

    ulong seed = time(NULL) & x;
    srand(seed);
    printf("Seed: %ld\n", seed);
    printf("Seed == x: %d\n", (seed == x));

    int r;
    while(1){
        r = rand();
        printf("%d", r);
        if (i < 10){
            printf(" | ");
            i++;
        } else {
            printf("\n");
            break;
        }
    }

    return 0;
}