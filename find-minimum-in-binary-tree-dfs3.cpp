// Find minimum in binary tree (DFS, another)
#include <iostream>
#include <stack>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int v) : data(v), left(nullptr), right(nullptr) {}
};
int findMin(Node* root) {
    int mn = INT_MAX;
    stack<Node*> st;
    st.push(root);
    while (!st.empty()) {
        Node* n = st.top(); st.pop();
        mn = min(mn, n->data);
        if (n->left) st.push(n->left);
        if (n->right) st.push(n->right);
    }
    return mn;
}
int main() {
    Node* root = new Node(29);
    root->left = new Node(20);
    root->right = new Node(34);
    cout << findMin(root);
    return 0;
}
