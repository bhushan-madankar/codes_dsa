// Find minimum in binary tree (preorder)
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
    int mn = root->data;
    mn = min(mn, findMin(root->left));
    mn = min(mn, findMin(root->right));
    return mn;
}
int main() {
    Node* root = new Node(11);
    root->left = new Node(6);
    root->right = new Node(13);
    cout << findMin(root);
    return 0;
}
