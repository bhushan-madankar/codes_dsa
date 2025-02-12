// Find minimum in binary tree (recursive, alternative)
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
    int l = findMin(root->left);
    int r = findMin(root->right);
    return min(root->data, min(l, r));
}
int main() {
    Node* root = new Node(22);
    root->left = new Node(13);
    root->right = new Node(27);
    cout << findMin(root);
    return 0;
}
