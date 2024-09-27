//
// Created by samandar on 9/27/24.
//
//LeetCode Remove Duplicates from Sorted List problem solutions


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//////////////1-recursion solution////////////////////////runtime: 4ms :)

struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    if(head->val==head->next->val) {
        head->next=head->next->next;
        deleteDuplicates(head);
    } else deleteDuplicates(head->next);
    return head;
}

///////////////////2-iteration solution////////////////////runtime: 4ms :)
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* temp = head;
    while(temp&&temp->next) {
        if(temp->val==temp->next->val) {
            temp->next = temp->next->next;
        } else temp = temp->next;
    }
    return head;
}