/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int height(struct Node* node){
        int maxHeight = 0;

        if(node == NULL){
            return 0;
        }

        int leftHeight = height(node->left);
        int rightHeight = height(node->right);

        maxHeight = 1 + max(leftHeight, rightHeight);

        return maxHeight;
    }
};