/* Tree node structure  used in the program
*/

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

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int diameter(Node* root) {

    }
};