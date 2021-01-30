#ifndef INSERTION_SORT
#define INSERTION_SORT

#include <vector>

void insertion_sort(vector<int> &v) {
    int k, j;
    for (int i = 1; i < v.size(); i++) {
        k = v[i];
        j = i - 1;
        while (j >= 0 && v[j] > k) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = k;
    }
}

#endif
