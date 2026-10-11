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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head | k==0){
            return head;
        }
        ListNode* t=nullptr;
        ListNode* temp=head;
        int n=0;
        while (temp){
            n++;
            if (!temp->next){
                t=temp;
            }
            temp=temp->next;
        }
        t->next=head;
        k=k%n;
        n=n-k-1;
        cout<<n<<" "<<k;
        temp=head;
        for (int i=0;i<n;i++){
            temp=temp->next;
        }
        head=temp->next;
        temp->next=nullptr;
        return head;


    }
};