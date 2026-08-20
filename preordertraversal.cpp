#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void preorder(Node* root, vector<int>& ans) {
    // Base case
    if (root == NULL)
        return;

    // Root
    ans.push_back(root->data);

    // Left
    preorder(root->left, ans);

    // Right
    preorder(root->right, ans);
}

int main() {

    // Creating tree
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    vector<int> ans;

    preorder(root, ans);

    // Print preorder
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}