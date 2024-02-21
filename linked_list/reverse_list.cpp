#include<bits/stdc++.h>
using namespace std;
struct Node
{
    /* data */
    int data;
    struct Node *next;
};
Node* reverseList(Node *head) 
{
    Node* prev=nullptr;
    Node* curr=head;
    while (curr!=NULL)
    {
      Node* temp =curr->next;
      curr->next=prev;
      prev=curr;
      curr=temp;
      }
      return prev;
      
      
      
        /* code */
    }
    

int main()
{
     Node* head = new Node;
    head->data = 1;
    head->next = new Node;
    head->next->data = 2;
    head->next->next = new Node;
    head->next->next->data = 3;
    head->next->next->next = new Node;
    head->next->next->next->data = 4;
    head->next->next->next->next = nullptr;

    std::cout << "Original linked list: ";
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;

    // reverse the linked list
    Node* newHead = reverseList(head);

    std::cout << "Reversed linked list: ";
    current = newHead;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;

    // free the memory allocated for the linked list
    current = newHead;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}