#include <iostream>

using namespace std;

struct Node { int data; Node* next; };

Node* getIntrsctn(Node* h1, Node* h2)
{
    Node *p1 = h1, *p2 = h2;
    while (p1 != p2)
    {
        p1 = (p1 == nullptr) ? h2 : p1->next;
        p2 = (p2 == nullptr) ? h1 : p2->next;
    }
    return p1;
}

int main()
{
    Node* newNode;
    Node* h1 = new Node(); h1->data = 4;
    Node* h2 = new Node(); h2->data = 5;
    newNode = new Node(); newNode->data = 1; h1->next = newNode;
    newNode = new Node(); newNode->data = 6; h2->next = newNode;
    newNode = new Node(); newNode->data = 1; h2->next->next = newNode;
    Node* intersect = new Node(); intersect->data = 8;
    h1->next->next = intersect; h2->next->next->next = intersect;
    newNode = new Node(); newNode->data = 5; intersect->next = newNode;
    
    Node* res = getIntrsctn(h1, h2);
    if(res) cout << "Intersection at " << res->data << endl;
    return 0;
}
