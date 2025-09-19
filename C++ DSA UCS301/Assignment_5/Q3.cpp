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

void findMid(Node* head)
{
    Node* slow = head;
    Node* fast = head;
    if (head != nullptr)
    {
        while (fast != nullptr && fast->next != nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        cout << "Middle is: " << slow->data << endl;
    }
}

int main()
{
    Node* head = nullptr;
    for(int i = 5; i > 0; i--) push(&head, i);
    findMid(head);
    return 0;
}