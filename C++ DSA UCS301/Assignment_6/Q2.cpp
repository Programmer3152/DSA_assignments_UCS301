#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

void disp(Node *last)
{
    if
    {
        (last == NULL)
        return;
    }

    Node *tmp = last->next;
    do
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    } while (tmp != last->next);

    cout << tmp->data << endl;
}

int main()
{
    Node *n1 = new Node{20, NULL};
    Node *n2 = new Node{100, NULL};
    Node *n3 = new Node{40, NULL};
    Node *n4 = new Node{80, NULL};
    Node *n5 = new Node{60, NULL};

    Node *last = n5;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n1;

    cout << "Input: 20 -> 100 -> 40 -> 80 -> 60" << endl;
    cout << "Output: ";
    disp(last);

    return 0;
}
/*
 * Name - Arnav Chandla
 * Roll No. - 1024170259
 */
