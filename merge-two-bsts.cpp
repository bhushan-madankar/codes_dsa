// Merge two BSTs into a sorted list
#include <iostream>
#include <vector>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int v) : data(v), left(nullptr), right(nullptr) {}
};
void inorder(Node* root, vector<int>& v) {
    if (!root) return;
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}
vector<int> merge(Node* r1, Node* r2) {
    vector<int> v1, v2, res;
    inorder(r1, v1); inorder(r2, v2);
    int i = 0, j = 0;
    while (i < v1.size() && j < v2.size()) {
        if (v1[i] < v2[j]) res.push_back(v1[i++]);
        else res.push_back(v2[j++]);
    }
    while (i < v1.size()) res.push_back(v1[i++]);
    while (j < v2.size()) res.push_back(v2[j++]);
    return res;
}
int main() {
    Node* r1 = new Node(2); r1->left = new Node(1); r1->right = new Node(4);
    Node* r2 = new Node(3); r2->left = new Node(0); r2->right = new Node(5);
    vector<int> merged = merge(r1, r2);
    for (int x : merged) cout << x << ' ';
    return 0;
}
