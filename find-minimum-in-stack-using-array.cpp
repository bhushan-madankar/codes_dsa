// Stack with getMin using array
#include <iostream>
using namespace std;
class MinStack {
    int arr[1000], minArr[1000], topIdx = -1, minIdx = -1;
public:
    void push(int x) {
        arr[++topIdx] = x;
        if (minIdx == -1 || x <= minArr[minIdx]) minArr[++minIdx] = x;
    }
    void pop() {
        if (arr[topIdx--] == minArr[minIdx]) --minIdx;
    }
    int getMin() { return minArr[minIdx]; }
};
int main() {
    MinStack ms;
    ms.push(5); ms.push(3); ms.push(7);
    cout << ms.getMin();
    return 0;
}
