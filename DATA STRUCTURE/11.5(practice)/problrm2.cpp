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
   int size(ListNode *head)
     {
        ListNode *tmp = head;
        int count = 0;
        while(tmp!=NULL)
          {
            count++;
            tmp = tmp->next;
          }
          return count++;
     }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *tmp = head;
        int sz = size(head);
        if(sz<n)
          {
            return head;
          }
          if(sz==n)
           {
            ListNode *deleteNode = head;
            head = head->next;
            delete deleteNode;
            return head;
           }
           for(int i=1; i<sz-n;i++)
           {
            tmp = tmp->next;
           }
           ListNode *deleteNode = tmp->next;
           tmp->next = tmp->next->next;
           delete deleteNode;
           return head;
    }
};