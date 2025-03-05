class Solution {
public:
ListNode *middle(ListNode *head)
{
    ListNode * slow=head;
    ListNode * fast=head->next;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow;
}
ListNode *merge(ListNode*left,ListNode*right)
{
    ListNode *head=new ListNode(-1);
    ListNode *tail=head;
    
    ListNode*temp1=left;
    ListNode*temp2=right;
    while(temp1!=NULL&&temp2!=NULL)
    {
        if(temp1->val>temp2->val)
        {
            tail->next=temp2;
            tail=temp2;
            temp2=temp2->next;
        }
        else
        {
            tail->next=temp1;
            tail=temp1;
            temp1=temp1->next;
        }
       
       
    }
    if(temp1!=NULL)
    {
        tail->next=temp1;
    }
    if(temp2!=NULL)
    {
        tail->next=temp2;

    }

    return head->next;

}


    ListNode* sortList(ListNode* head) {
       if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* mid = middle(head);
        ListNode* left = head;
        ListNode* right = mid->next;
        mid->next = nullptr;

        left = sortList(left);
        right = sortList(right);

        return merge(left, right);
    }
};