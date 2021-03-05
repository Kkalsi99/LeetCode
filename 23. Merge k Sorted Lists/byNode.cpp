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
    ListNode *first = head;
    ListNode *second = head->next;
    while (first != NULL)
    {
        first->next = second->next;
        second->next = first;
        first = first->next;
        second = second->next->next->next;
    }
}