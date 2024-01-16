/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
         ListNode* rabbit = head;
         unordered_set<ListNode*>isVisited;

         while(rabbit!=NULL)
         {
             if(isVisited.find(rabbit)!=isVisited.end())
             {
                 return true;
             }
             isVisited.insert(rabbit);
             rabbit = rabbit->next;
         }
         return false;
    }
};