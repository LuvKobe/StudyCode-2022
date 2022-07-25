/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

 
 //思路一
 struct ListNode* reverseList(struct ListNode* head){
     // 头节点为空，直接返回
     if (head == NULL) {
         return NULL;
     }
     struct ListNode* n1, *n2, *n3;
     n1 = NULL;
     n2 = head;
     n3 = n2->next;
     // n2不为空，就继续循环
     while (n2 != NULL) {
         n2->next = n1;
         n1 = n2;
         n2 = n3;
         // n3不为空，才执行
         if (n3 != NULL) {
         n3 = n3->next;
         }
     }
     return n1;
 }
 

 // 思路二
struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL) {
        return NULL;
    }
    struct ListNode* newHead = NULL;
    struct ListNode* cur = head;
    while (cur) {
        // 头插前保存
        struct ListNode* next = cur->next;

        // 头插
        cur->next = newHead;
        newHead = cur;
        cur = next;
        if (next) {
            next = next->next;
        }
    }
    return newHead;
}