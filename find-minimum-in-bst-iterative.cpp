// Find minimum in BST (iterative)
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int v) : data(v), left(nullptr), right(nullptr) {}
};
int findMin(Node* root) {
    while (root->left) root = root->left;
    return root->data;
}
int main() {
    Node* root = new Node(20);
    root->left = new Node(10);
    root->right = new Node(30);
    cout << findMin(root);
    return 0;
}
