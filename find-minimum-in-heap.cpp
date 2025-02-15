// Find minimum in min-heap
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main() {
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(4); pq.push(2); pq.push(7);
    cout << pq.top();
    return 0;
}
