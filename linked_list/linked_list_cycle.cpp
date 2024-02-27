#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

bool hasCycle(ListNode *head) {
    if (head == NULL || head->next == NULL) {
        return false;
    }
    
    ListNode *slow = head;
    ListNode *fast = head->next;
    
    while (slow != fast) {
        if (fast == NULL || fast->next == NULL) {
            return false;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return true;
}
void printLinkedList(ListNode*
head) {
    ListNode* cur = head;
    while (cur != NULL) {
        cout << cur->val << " ";
        cur = cur->next;
        }
        cout << endl;
        }
        
        int main() {
            // Create a linked list: 1 ->2 -> 3 -> 4 ->
          
            ListNode* head = new ListNode(1);
            head->next = new ListNode(2);
            head->next->next = new ListNode(3);
            head->next->next->next = new ListNode(4);
            head->next->next->next->next = head;
            
            cout << "Given Linked List:" << endl;
            printLinkedList(head);
            cout << "Does it have a cycle? " << (hasCycle(head) ? "Yes" : "No") << endl;
            
            return 0;
        }
