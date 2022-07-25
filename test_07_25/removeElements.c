struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* prev = NULL;
    struct ListNode* cur = head;
    while (cur) {
        if (cur->val != val) {
            prev = cur;
            cur = cur->next;
        }
        else {
            struct ListNode* curNext = cur->next;
            if (prev == NULL) {
                free(cur);
                head = curNext;
                cur = curNext;
            }
            else {
                free(cur);
                prev->next = curNext;
                cur = curNext;
            }
        }
    }
    return head;
}