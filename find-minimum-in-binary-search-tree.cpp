// Find minimum in BST (recursive)
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int v) : data(v), left(nullptr), right(nullptr) {}
};
int findMin(Node* root) {
    if (!root->left) return root->data;
    return findMin(root->left);
}
// activity chunk 15
int main() {
    Node* root = new Node(12);
    root->left = new Node(7);
    root->right = new Node(15);
    cout << findMin(root);
    return 0;
}
