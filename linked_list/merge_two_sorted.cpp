#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to merge two sorted lists
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    // Base cases
    if (!l1) return l2;
    if (!l2) return l1;
    
    // Merge lists
    ListNode* head = NULL;
    if (l1->val < l2->val) {
        head = l1;
        l1->next = mergeTwoLists(l1->next, l2);
    } else {
        head = l2;
        l2->next = mergeTwoLists(l1, l2->next);
    }
    
    return head;
}

// Function to create a linked list from an array
ListNode* createLinkedList(vector<int>& arr) {
    ListNode* head = NULL;
    ListNode* tail = NULL;
    
    for (int i = 0; i < arr.size(); i++) {
        ListNode* newNode = new ListNode(arr[i]);
        
        if (!head) {
            head = newNode;
        } else {
            tail->next = newNode;
        }
        
        tail = newNode;
    }
    
    return head;
}

int main() {
    vector<int> arr1 = {1, 3, 5};
    vector<int> arr2 = {2, 4, 6};
    
    ListNode* l1 = createLinkedList(arr1);
    ListNode* l2 = createLinkedList(arr2);
    
    ListNode* mergedList = mergeTwoLists(l1, l2);
    
    // Print merged list
    while (mergedList) {
        cout << mergedList->val << " ";
        mergedList = mergedList->next;
    }
    
    return 0;
}