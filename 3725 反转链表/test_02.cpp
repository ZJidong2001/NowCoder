/*
递归
使用递归函数，一直递归到链表的最后一个结点，该结点就是反转后的头结点，记作ans
此后，每次函数在返回的过程中，让当前结点的下一个结点的next指针指向当前节点
同时让当前结点的next指针指向nullptr，从而实现从链表尾部开始的局部反转
当递归函数全部出栈后，链表反转完成
*/

class Solution
{
public:
    ListNode* ReverseList(ListNode* head)
    {
        if (head == nullptr || head->next == nullptr)  // 递归终止条件：如果链表为空或只有一个节点，直接返回头节点
            return head;

        // 递归调用：
        ListNode* ans = ReverseList(head->next);  // 反转以head->next开头的子链表，并返回反转后的新头节点

        // 反转操作：
        head->next->next = head;  // 让head->next的next指向head（即反转当前节点和下一个节点的指向）
        head->next = nullptr;  // 断开head的next指针，防止形成环

        return ans;  // 返回反转后的新头节点（即原链表的尾节点）
    }
};