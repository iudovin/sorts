#ifndef MERGE_SORT
#define MERGE_SORT

#include <vector>

vector<int> merge(vector<int> a, vector<int> b) {
    vector<int> c;

    int n = a.size();
    int m = b.size();

    int i = 0, j = 0;
    
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            c.push_back(a[i]);
            i++;
        } else {
            c.push_back(b[j]);
            j++;
        }
    }
    
    while (i < n) {
        c.push_back(a[i]);
        i++;
    }
    
    while (j < m) {
        c.push_back(b[j]);
        j++;
    }

    return c;
}


void merge_sort(vector<int> &v) {
    if (v.size() == 1)
        return;
    
    vector<int>::iterator m = v.begin() + v.size() / 2;
    
    vector<int> v1 = vector<int>(v.begin(), m);
    vector<int> v2 = vector<int>(m, v.end());
    
    merge_sort(v1);
    merge_sort(v2);
    
    v = merge(v1, v2);
}

#endif
