class Solution {
public:
    void reorderList(ListNode* head) {
        vector<ListNode*> v;
        ListNode* curr = head;
        int n = 0, i = 0;
        while(curr != NULL){
            v.push_back(curr);
            curr = curr->next;
            n++;
        }
        if(n == 1) return;
        for(i = 0; i < n/2; i++){
            if(i == 0){
                curr = v[i];
                curr->next = v[n-i-1];
                curr = curr->next;
            }else{
                curr->next = v[i];
                curr = curr->next;
                curr->next = v[n-i-1];
                curr = curr->next;
            }
        }
        if(n%2){
            curr->next = v[i];
            curr = curr->next;
        }
        curr->next = NULL;
        return;
    }
};