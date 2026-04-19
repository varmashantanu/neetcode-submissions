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

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;

        ListNode* resHead = nullptr;
        ListNode* resTail = nullptr;

        while(curr1 && curr2)
        {
            ListNode* temp = nullptr;
            if(curr1->val < curr2->val)
            {
                temp = curr1;
                curr1 = curr1->next;
            }
            else
            {
                temp = curr2;
                curr2 = curr2->next;
            }

            if(!resHead)
            {   
                resHead = temp;
                resTail = temp;
            }
            else
            {
                resTail->next = temp;
                resTail = temp;
            }
        }

        if(curr1)
        {
           if(!resHead)
            resHead = curr1;
           else 
            resTail->next = curr1;
        }

        if(curr2)
        {
           if(!resHead)
            resHead = curr2;
           else 
            resTail->next = curr2;    
        }

        return resHead;   
    }
};
