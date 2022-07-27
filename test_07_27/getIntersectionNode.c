/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
    struct ListNode* tailA, * tailB;
    tailA = headA;
    tailB = headB;

    int lenA = 1; // ���A����ĳ���
    int lenB = 1; // ���B����ĳ���

    // A������β�ڵ�
    while (tailA->next) {
        tailA = tailA->next;
        ++lenA;
    }

    // B������β�ڵ�
    while (tailB->next) {
        tailB = tailB->next;
        ++lenB;
    }

    // �������Ⱦͷ���NULL
    if (tailA != tailB) {
        return NULL;
    }

    // �ཻ���󽻵㣬��������"��ಽ", Ȼ��һ����
    struct ListNode* shortList = headA; // ����A��
    struct ListNode* longList = headB; // ����B��
    // ���A�ĳ��ȴ���B
    if (lenA > lenB) {
        // ��ô�ͽ���һ��
        longList = headA;
        shortList = headB;
    }

    // �����ಽ
    int gap = abs(lenA - lenB); // abs�������ֵ�ĺ���

    // �������߲�ಽ
    while (gap--) {
        longList = longList->next;
    }

    // Ȼ��ͬʱ��
    while (shortList && longList) {
        if (shortList == longList) {
            return shortList;
        }
        shortList = shortList->next;
        longList = longList->next;
    }

    // Ҫ���������Ȼ����ʾ[�������]
    return NULL;
}