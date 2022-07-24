/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {
        struct ListNode* lessHead, * lessTail, * greaterHead, * greaterTail;
        lessHead = lessTail = (struct ListNode*)malloc(sizeof(struct ListNode));
        greaterHead = greaterTail = (struct ListNode*)malloc(sizeof(struct ListNode));

        lessTail->next = greaterTail->next = NULL;

        struct ListNode* cur = pHead;

        while (cur) {
            if (cur->val < x) {
                lessTail->next = cur;
                lessTail = lessTail->next;
            }
            else {
                greaterTail->next = cur;
                greaterTail = greaterTail->next;
            }
            cur = cur->next;
        }

        lessTail->next = greaterHead->next;
        greaterTail->next = NULL;

        struct ListNode* list = lessHead->next;
        free(lessHead);
        free(greaterHead);

        return list;
    }
};