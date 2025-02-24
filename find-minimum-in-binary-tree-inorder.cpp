// activity chunk 58
// Find minimum in binary tree (inorder)
#include <iostream>
#include <algorithm>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int v) : data(v), left(nullptr), right(nullptr) {}
};
void inorder(Node* root, int& mn) {
    if (!root) return;
    inorder(root->left, mn);
    mn = min(mn, root->data);
    inorder(root->right, mn);
}
int main() {
    Node* root = new Node(15);
    root->left = new Node(8);
    root->right = new Node(18);
    int mn = INT_MAX;
    inorder(root, mn);
    cout << mn;
    return 0;
}
