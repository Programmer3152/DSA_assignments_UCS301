#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head = nullptr;

void insertBeg(int val)
{
    Node* new_node = new Node();
    new_node->data = val;
    new_node->next = head;
    head = new_node;
}

void insertEnd(int val)
{
    Node* new_node = new Node();
    new_node->data = val;
    new_node->next = nullptr;
    if (head == nullptr)
    {
        head = new_node;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) temp = temp->next;
    temp->next = new_node;
}

void deleteBeg()
{
    if (head == nullptr) return;
    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteEnd()
{
    if (head == nullptr) return;
    if (head->next == nullptr)
    {
        delete head; head = nullptr; return;
    }
    Node* temp = head;
    while (temp->next->next != nullptr) temp = temp->next;
    delete temp->next;
    temp->next = nullptr;
}

void display()
{
    Node* temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    insertEnd(10); insertEnd(20); insertBeg(5);
    display();
    deleteBeg();
    display();
    deleteEnd();
    display();
    return 0;
}