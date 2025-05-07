/*
迭代
在遍历链表时，将当前节点的next指针改为指向前一个节点
由于节点没有指向其前一个节点，因此必须事先存储其前一个节点
在更改指向之前，还需要存储后一个节点
最后返回新的头指针
*/

class Solution
{
public:
    ListNode* ReverseList(ListNode* head)
    {
        ListNode* prev = nullptr;  // 初始化前驱节点为nullptr
        ListNode* cur = head;  // 初始化当前节点为头节点

        while (cur != nullptr)  // 遍历链表直到当前节点为nullptr（即链表末尾）
        {
            ListNode* next = cur->next;  // 保存当前节点的下一个节点，防止断链后丢失
            cur->next = prev;  // 反转操作：将当前节点的next指向前驱节点
            prev = cur;  // 前驱节点移动到当前节点
            cur = next;  // 当前节点移动到下一个节点
        }

        return prev;  // 循环结束时，prev指向反转后的新头节点
    }
};