// Find minimum in binary tree (BFS, alternative)
#include <iostream>
#include <queue>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int v) : data(v), left(nullptr), right(nullptr) {}
};
int findMin(Node* root) {
    int mn = INT_MAX;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* n = q.front(); q.pop();
        mn = min(mn, n->data);
        if (n->left) q.push(n->left);
        if (n->right) q.push(n->right);
    }
    return mn;
}
int main() {
    Node* root = new Node(23);
    root->left = new Node(14);
    root->right = new Node(28);
    cout << findMin(root);
    return 0;
}
