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
ListNode *removeNthFromEnd(ListNode *head, int n)
{
    ListNode *first = head;
    ListNode *second = head;
    for (int i = 0; i <= n; i++)
    {
        second = second->next;
    }
    while (second->next != NULL)
    {
        first = first->next;
        second = second->next;
    }
    first->next = first->next->next;
    return head;
}