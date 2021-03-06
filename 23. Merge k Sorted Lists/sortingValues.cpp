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
ListNode *mergeKLists(vector<ListNode *> &lists)
{
    vector<int> arr;

    for (int i = 0; i < lists.size(); i++)
    {
        ListNode *traverse = lists[i];
        while (traverse != NULL)
        {
            arr.push_back(traverse->val);
            traverse = traverse->next;
        }
    }

    sort(arr.begin(), arr.end());

    if (arr.size() == 0)
    {
        return NULL;
    }
    ListNode *sorted = new ListNode();
    ListNode *head = sorted;
    for (int i = 0; i < arr.size();)
    {

        sorted->val = arr[i++];
        if (i < arr.size())
        {
            sorted->next = new ListNode();

            sorted = sorted->next;
        }
    }

    return head;
}
int main()
{
    vector<ListNode *> lists;
    mergeKLists(lists);
}