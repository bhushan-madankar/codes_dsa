// Find minimum in BST recursively
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
int main() {
    Node* root = new Node(8);
    root->left = new Node(3);
// activity chunk 12
    root->right = new Node(10);
    cout << findMin(root);
    return 0;
}
