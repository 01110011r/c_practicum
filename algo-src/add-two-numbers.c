//
// Created by samandar on 9/26/24.
//
//LeetCode C Add Two Numbers problem solution

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
////////////////////1-algo//////////////////////////// didn't pass some testcases
/////////////long long int overflow????????????????????????????
long long toNum(struct ListNode* l) {
    if (l->next == NULL)
        return l->val;
    return toNum(l->next) * 10 + l->val;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    long long sum = toNum(l1) + toNum(l2);

    if(sum==0) {
        struct ListNode* res = (struct ListNode*)malloc(sizeof(struct ListNode));
        res->val=sum;
        res->next=NULL;
        return res;
    }

    struct ListNode* head = NULL;
    struct ListNode* tail = NULL;

    while (sum != 0) {
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        if (newNode == NULL) {
            printf("Xotira ajratishda xato.\n");
            return NULL;
        }
        newNode->val = sum % 10;
        sum /= 10;

        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            tail->next = newNode;
        }
        tail = newNode;
    }

    return head;
}


/////////////////////////2-algo///////////////////////////passed all tests
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int sum = 0;


    struct ListNode* head = NULL;
    struct ListNode* tail = NULL;

    while (sum != 0 || l1!=NULL || l2!=NULL) {
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        if (newNode == NULL) {
            printf("Xotira ajratishda xato.\n");
            return NULL;
        }

        if(l1!=NULL) {
            sum+=l1->val;
            l1=l1->next;
        }

        if(l2!=NULL) {
            sum+=l2->val;
            l2=l2->next;
        }

        newNode->val = sum % 10;
        sum /= 10;

        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            tail->next = newNode;
        }
        tail = newNode;
    }

    return head;
}

