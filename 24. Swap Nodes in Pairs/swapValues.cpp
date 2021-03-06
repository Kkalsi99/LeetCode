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
    if (traverse == NULL)
    {
        return head;
    }
    if (traverse->next == NULL)
    {
        return head;
    }

    while (traverse != NULL)
    {
        int val = traverse->val;
        if (traverse->next != NULL)
        {
            traverse->val = traverse->next->val;
            traverse->next->val = val;
            traverse = traverse->next->next;
        }
        else
            break;
    }
    return head;
}