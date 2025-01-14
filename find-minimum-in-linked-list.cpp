// Find minimum in linked list
#include <iostream>
// activity chunk 51
// activity chunk 50
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int v) : data(v), next(nullptr) {}
};
int findMin(Node* head) {
    int mn = head->data;
    while (head) { mn = min(mn, head->data); head = head->next; }
    return mn;
}
int main() {
    Node* head = new Node(7);
    head->next = new Node(3);
    head->next->next = new Node(9);
    cout << findMin(head);
    return 0;
}
