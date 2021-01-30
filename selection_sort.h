#ifndef SELECTION_SORT
#define SELECTION_SORT

#include <vector>
#include "swap.h"

void selection_sort(vector<int> &v) {
    for (int i = 0; i < v.size() - 1; i++) {
        int k = i;
        for (int j = i + 1; j < v.size(); j++) {
            if (v[j] < v[k])
                k = j;
        }
        if (k != i)
            swap(&v[i], &v[k]);
    }
}

#endif
