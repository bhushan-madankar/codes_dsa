// Find minimum in binary tree (recursive)
#include <iostream>
#include <algorithm>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int v) : data(v), left(nullptr), right(nullptr) {}
};
int findMin(Node* root) {
    if (!root) return INT_MAX;
    return min(root->data, min(findMin(root->left), findMin(root->right)));
}
int main() {
    Node* root = new Node(17);
    root->left = new Node(8);
    root->right = new Node(22);
    cout << findMin(root);
    return 0;
}
