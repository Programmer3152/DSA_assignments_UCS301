/*
* Approach:
* The list is hard-coded as per the example.
* The 'disp' function takes the 'last' pointer. The head of the list
* is 'last->next'.
* A 'do-while' loop is used to traverse the list, starting from the head.
* The loop continues as long as 'tmp != last->next' (i.e., until it
* loops back to the head).
* After the loop finishes, the head's value ('tmp->data') is printed
* one more time to fulfill the "repeating value of head node at the end"
* requirement.
*/
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
