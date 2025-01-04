// Find minimum in max-heap
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> heap = {10, 7, 8, 3, 2, 5};
    int mn = heap[heap.size()/2];
    for (int i = heap.size()/2; i < heap.size(); ++i) mn = min(mn, heap[i]);
    cout << mn;
    return 0;
}
