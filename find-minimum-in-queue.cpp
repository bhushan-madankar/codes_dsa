// Queue with getMin in O(1)
#include <iostream>
#include <queue>
#include <deque>
using namespace std;
class MinQueue {
    queue<int> q;
    deque<int> dq;
public:
    void push(int x) {
        q.push(x);
        while (!dq.empty() && dq.back() > x) dq.pop_back();
        dq.push_back(x);
    }
    void pop() {
        if (q.front() == dq.front()) dq.pop_front();
        q.pop();
    }
    int front() { return q.front(); }
    int getMin() { return dq.front(); }
};
int main() {
    MinQueue mq;
    mq.push(3); mq.push(1); mq.push(2);
    cout << mq.getMin();
    return 0;
}
