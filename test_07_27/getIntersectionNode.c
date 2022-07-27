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

    int lenA = 1; // 存放A链表的长度
    int lenB = 1; // 存放B链表的长度

    // A链表找尾节点
    while (tailA->next) {
        tailA = tailA->next;
        ++lenA;
    }

    // B链表找尾节点
    while (tailB->next) {
        tailB = tailB->next;
        ++lenB;
    }

    // 如果不相等就返回NULL
    if (tailA != tailB) {
        return NULL;
    }

    // 相交，求交点，长的先走"差距步", 然后一起走
    struct ListNode* shortList = headA; // 假设A短
    struct ListNode* longList = headB; // 假设B长
    // 如果A的长度大于B
    if (lenA > lenB) {
        // 那么就交换一下
        longList = headA;
        shortList = headB;
    }

    // 求出差距步
    int gap = abs(lenA - lenB); // abs是求绝对值的函数

    // 长的先走差距步
    while (gap--) {
        longList = longList->next;
    }

    // 然后同时走
    while (shortList && longList) {
        if (shortList == longList) {
            return shortList;
        }
        shortList = shortList->next;
        longList = longList->next;
    }

    // 要加这个，不然会显示[编译出错]
    return NULL;
}