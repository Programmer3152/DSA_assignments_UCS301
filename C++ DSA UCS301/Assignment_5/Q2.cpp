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

void deleteKey(Node** head_ref, int key)
{
    Node* temp = *head_ref, *prev = nullptr;
    int count = 0;
    
    while(temp != nullptr && temp->data == key)
    {
        *head_ref = temp->next;
        delete temp;
        temp = *head_ref;
        count++;
    }
    
    while(temp != nullptr)
    {
        while(temp != nullptr && temp->data != key)
        {
            prev = temp; temp = temp->next;
        }
        if(temp == nullptr) break;
        prev->next = temp->next;
        delete temp;
        temp = prev->next;
        count++;
    }
    cout << "Count: " << count << endl;
}

int main()
{
    Node* head = nullptr;
    push(&head, 1); push(&head, 3); push(&head, 1);
    push(&head, 2); push(&head, 1); push(&head, 2); push(&head, 1);
    deleteKey(&head, 1);
    display(head);
    return 0;
}