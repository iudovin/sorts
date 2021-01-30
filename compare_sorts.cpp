#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <thread>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

using namespace std;

#include "bubble_sort.h"
#include "selection_sort.h"
#include "insertion_sort.h"
#include "merge_sort.h"



void vector_sort(vector<int> &v) {
    sort(v.begin(), v.end());
}



int main() {
    
    const int n = 30000, m = 1000;
    
    vector<int> v;
    
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        v.push_back(rand() % m);
    
    vector<int> v1 = v;
    vector<int> v2 = v;
    vector<int> v3 = v;
    vector<int> v4 = v;
    vector<int> v5 = v;
    
    
    chrono::steady_clock::time_point timer_begin, timer_end;
    
    cout << "Bubble sort:    ";
    timer_begin = chrono::steady_clock::now();
    bubble_sort(v1);
    timer_end = chrono::steady_clock::now();
    cout << ' ' << chrono::duration_cast<std::chrono::microseconds>(timer_end - timer_begin).count() << " ms" << endl;
    
    cout << "Selection sort: ";
    timer_begin = chrono::steady_clock::now();
    selection_sort(v2);
    timer_end = chrono::steady_clock::now();
    cout << ' ' << chrono::duration_cast<std::chrono::microseconds>(timer_end - timer_begin).count() << " ms" << endl;
    
    cout << "Insertion sort: ";
    timer_begin = chrono::steady_clock::now();
    insertion_sort(v3);
    timer_end = chrono::steady_clock::now();
    cout << ' ' << chrono::duration_cast<std::chrono::microseconds>(timer_end - timer_begin).count() << " ms" << endl;
    
    cout << "Merge sort:     ";
    timer_begin = chrono::steady_clock::now();
    merge_sort(v4);
    timer_end = chrono::steady_clock::now();
    cout << ' ' << chrono::duration_cast<std::chrono::microseconds>(timer_end - timer_begin).count() << " ms" << endl;
    
    cout << "Vector sort:    ";
    timer_begin = chrono::steady_clock::now();
    vector_sort(v5);
    timer_end = chrono::steady_clock::now();
    cout << ' ' << chrono::duration_cast<std::chrono::microseconds>(timer_end - timer_begin).count() << " ms" << endl;
    
    return 0;
}
