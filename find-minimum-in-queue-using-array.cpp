// Queue with getMin using array
#include <iostream>
using namespace std;
class MinQueue {
    int arr[1000], dq[1000], frontIdx = 0, rearIdx = -1, dqFront = 0, dqRear = -1;
public:
    void push(int x) {
        arr[++rearIdx] = x;
        while (dqRear >= dqFront && dq[dqRear] > x) --dqRear;
        dq[++dqRear] = x;
    }
    void pop() {
        if (arr[frontIdx++] == dq[dqFront]) ++dqFront;
    }
    int getMin() { return dq[dqFront]; }
};
int main() {
    MinQueue mq;
    mq.push(4); mq.push(2); mq.push(5);
    cout << mq.getMin();
    return 0;
}
