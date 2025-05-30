// Find minimum in binary tree (iterative)
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
// activity chunk 28
int main() {
    Node* root = new Node(13);
    root->left = new Node(5);
// activity chunk 33
    root->right = new Node(21);
    cout << findMin(root);
    return 0;
}
