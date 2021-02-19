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
ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
{
    ListNode *l1 = l1;
    ListNode *l2 = l2;
    if (l1 == NULL && l2 == NULL)
        return l1;
    ListNode *Solution = new ListNode();
    ListNode *head = Solution;

    while (l2 != NULL && l1 != NULL)
    {
        if (l1->val <= l2->val)
        {

            Solution->val = l1->val;
            l1 = l1->next;
            Solution->next = new ListNode();
            Solution = Solution->next;
        }
        else
        {
            Solution->val = l2->val;
            l2 = l2->next;
            Solution->next = new ListNode();
            Solution = Solution->next;
        }
    }
    if (l2 != NULL)
    {
        Solution->val = l2->val;
        Solution->next = l2->next;
    }
    else
    {
        Solution->val = l1->val;
        Solution->next = l1->next;
    }
    return head;
}
int main()
