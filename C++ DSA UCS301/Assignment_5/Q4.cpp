#include <iostream>

using namespace std;

struct Node { int data; Node* next; };

void push(Node** head_ref, int val)
{
    Node* new_node = new Node();
    new_node->data = val;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void display(Node* node)
{
    while (node != nullptr)
    {
        cout << node->data << " -> ";
        node = node->next;
    }
    cout << "NULL" << endl;
}

void reverse(Node** head_ref)
{
    Node* prev = nullptr;
    Node* curr = *head_ref;
    Node* next = nullptr;
    while (curr != nullptr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head_ref = prev;
}

int main()
{
    Node* head = nullptr;
    push(&head, 4); push(&head, 3); push(&head, 2); push(&head, 1);
    display(head);
    reverse(&head);
    display(head);
    return 0;
}