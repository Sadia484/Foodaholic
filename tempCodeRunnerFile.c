
#include <stdio.h>

int min(int x, int y) {
    int diff = x - y;
    int mask = (diff >> 31) & 1;
    return x - mask * diff;
}

int main() {
    int result = min(10, 5);
    printf("Minimum value: %d\n", result);
    return 0;
}