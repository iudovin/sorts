#ifndef SWAP
#define SWAP

void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

#endif
