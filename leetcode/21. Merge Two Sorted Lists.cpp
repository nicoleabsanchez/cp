/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *return_node = new ListNode(INT_MIN);

        ListNode *head_node = return_node;

        // se verifica que el nodo exista
        while (list1 != nullptr && list2 != nullptr)
        {
            if (list1->val < list2->val)
            {
                return_node->next = list1;
                list1 = list1->next;
            }
            else
            {
                return_node->next = list2;
                list2 = list2->next;
            }

            return_node = return_node->next;
        }

        // agregar la lista restante
        if (list1 == nullptr)
        {
            return_node->next = list2;
        }
        else if (list2 == nullptr)
        {
            return_node->next = list1;
        }

        return head_node->next;
    }
};