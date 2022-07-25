/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

 
 //˼·һ
 struct ListNode* reverseList(struct ListNode* head){
     // ͷ�ڵ�Ϊ�գ�ֱ�ӷ���
     if (head == NULL) {
         return NULL;
     }
     struct ListNode* n1, *n2, *n3;
     n1 = NULL;
     n2 = head;
     n3 = n2->next;
     // n2��Ϊ�գ��ͼ���ѭ��
     while (n2 != NULL) {
         n2->next = n1;
         n1 = n2;
         n2 = n3;
         // n3��Ϊ�գ���ִ��
         if (n3 != NULL) {
         n3 = n3->next;
         }
     }
     return n1;
 }
 

 // ˼·��
struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL) {
        return NULL;
    }
    struct ListNode* newHead = NULL;
    struct ListNode* cur = head;
    while (cur) {
        // ͷ��ǰ����
        struct ListNode* next = cur->next;

        // ͷ��
        cur->next = newHead;
        newHead = cur;
        cur = next;
        if (next) {
            next = next->next;
        }
    }
    return newHead;
}