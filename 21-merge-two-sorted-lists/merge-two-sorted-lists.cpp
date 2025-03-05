class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (!l1 || !l2)
            return l1 ? l1 : l2;
        
        ListNode dummy(0);
        ListNode* ptr = &dummy;
        
        while (l1 && l2) {
     
            if (l1->val > l2->val)
                std::swap(l1, l2);
            
            ptr->next = l1;
            l1 = l1->next;
            ptr = ptr->next;}
      
        ptr->next = l1 ? l1 : l2;
        return dummy.next;}};