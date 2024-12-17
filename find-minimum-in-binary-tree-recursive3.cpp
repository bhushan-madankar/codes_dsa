// Find minimum in binary tree (recursive, another)
#include <iostream>
#include <algorithm>
using namespace std;
struct Node {
// activity chunk 34
    int data;
    Node* left;
    Node* right;
    Node(int v) : data(v), left(nullptr), right(nullptr) {}
};
int findMin(Node* root) {
    if (!root) return INT_MAX;
    int l = findMin(root->left);
    int r = findMin(root->right);
    return min(root->data, min(l, r));
}
int main() {
    Node* root = new Node(27);
    root->left = new Node(18);
    root->right = new Node(32);
    cout << findMin(root);
    return 0;
}
