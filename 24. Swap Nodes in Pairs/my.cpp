#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *swapPairs(ListNode *head)
{
    ListNode *traverse = head;

    while (traverse->next != NULL)
    {
        int val = traverse->val;
        traverse->val = traverse->next->val;
        traverse->next->val = val;
    }
    return head;
}