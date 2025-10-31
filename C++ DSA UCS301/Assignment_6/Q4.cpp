/*
* Approach:
* This function uses a "two-pointer" approach, which is efficient
* for a Doubly Linked List.
* 1. A 'head' pointer ('h') is set to the start.
* 2. A 'tail' pointer ('t') is found by traversing to the end of the
* list (where tail->next == NULL).
* 3. A 'while' loop runs, moving 'h' forward (h = h->next) and 't'
* backward (t = t->prev) simultaneously.
* 4. In each iteration, it checks if (h->data != t->data). If they
* don't match, the list is not a palindrome, and it returns 'false'.
* 5. The loop stops when the pointers meet (h == t) or cross
* (h->prev == t), which covers both even and odd length lists.
* 6. If the loop completes without finding a mismatch, it returns 'true'.
*/
#include <iostream>

using namespace std;

struct Node
{
    char data;
    Node *prev, *next;
};

bool isPalin(Node *head)
{
    if
    {
        (head == NULL)
        return true;
    }

    Node *tail = head;
    while
    {
        (tail->next != NULL)
        tail = tail->next;
    }

    Node *h = head;
    Node *t = tail;

    while
    {
        (h != t && h->prev != t)
        if
        {
            (h->data != t->data)
            return false;
        }
        h = h->next;
        t = t->prev;
    }

    return true;
}

int main()
{
    Node *n1 = new Node{'L', NULL, NULL};
    Node *n2 = new Node{'E', n1, NULL};
    Node *n3 = new Node{'V', n2, NULL};
    Node *n4 = new Node{'E', n3, NULL};
    Node *n5 = new Node{'L', n4, NULL};

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    
    Node *head = n1;

    cout << "Input: L <-> E <-> V <-> E <-> L" << endl;
    
    if
    {
        (isPalin(head))
        cout << "Output: True" << endl;
    }
    else
    {
        cout << "Output: False" << endl;
    }

    return 0;
}
/*
 * Name - Arnav Chandla
 * Roll No. - 1024170259
 */
