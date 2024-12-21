// Find minimum in doubly linked list
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int v) : data(v), next(nullptr), prev(nullptr) {}
};
int findMin(Node* head) {
    int mn = head->data;
    while (head) { mn = min(mn, head->data); head = head->next; }
    return mn;
}
int main() {
    Node* head = new Node(6);
    head->next = new Node(4);
    head->next->prev = head;
    head->next->next = new Node(9);
    head->next->next->prev = head->next;
    cout << findMin(head);
    return 0;
}
