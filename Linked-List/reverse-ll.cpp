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
    ListNode* reverseList(ListNode * head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* temp = curr;

        while(temp != NULL){
            temp = temp -> next;
            curr -> next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
};