// Approach 1 (brute force)
// Traverse through entire list and maintain a count variable 'n'.
// Traverse again 'n/2' to get the middle element
// 
// Approach 2 (Hint: Hare tortoise method)
// Concept of fast pointer and slow pointer


#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution{
    public:
    ListNode* middleElement(){

    }
};