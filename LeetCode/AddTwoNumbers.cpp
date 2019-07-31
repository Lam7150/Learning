
#include <cmath>

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

/**
 * You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
 * You may assume the two numbers do not contain any leading zero, except the number 0 itself.
 */
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    int sum = 0, i = 0;
    ListNode *traverse, *head;
    head = traverse;

    while (l1 != NULL && l2 != NULL)
    {
        sum += (l1->val + l2->val) * std::pow(10, i);
        l1 = l1->next;
        l2 = l2->next;
        traverse = new ListNode((int)(sum / std::pow(10, i)) % 10);
        traverse = traverse->next;
        i++;
    }

    return head;
}