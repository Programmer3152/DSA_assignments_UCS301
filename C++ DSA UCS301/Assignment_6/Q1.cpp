/*
* Approach:
* This program uses a 'head' pointer (initially NULL) to mark the start
* of the list. Each 'Node' contains 'data', a 'next' pointer to the
* following node, and a 'prev' pointer to the preceding node.
* - Insertion (First): New node's 'next' points to 'head', 'head's 'prev'
* points to new node, then 'head' is updated.
* - Insertion (Last): Traverses to the end (tmp->next == NULL), then links
* the new node.
* - Insertion (After): Finds the 'key' node, then relinks 'prev' and 'next'
* pointers to fit the new node in between.
* - Deletion: Finds the 'key' node and "bypasses" it by linking its
* 'prev' and 'next' nodes directly to each other.
* - Search: Simple linear traversal.
*/
#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
};

Node *head = NULL;

void insF(int val)
{
    Node *n = new Node;
    n->data = val;
    n->prev = NULL;
    n->next = head;

    if
    {
        (head != NULL)
        head->prev = n;
    }
    head = n;
}

void insL(int val)
{
    Node *n = new Node;
    n->data = val;
    n->next = NULL;

    if
    {
        (head == NULL)
        n->prev = NULL;
        head = n;
        return;
    }

    Node *tmp = head;
    while
    {
        (tmp->next != NULL)
        tmp = tmp->next;
    }
    tmp->next = n;
    n->prev = tmp;
}

void insA(int key, int val)
{
    Node *n = new Node;
    n->data = val;

    Node *tmp = head;
    while
    {
        (tmp != NULL && tmp->data != key)
        tmp = tmp->next;
    }

    if
    {
        (tmp == NULL)
        cout << "Node to insert after not found." << endl;
        delete n;
        return;
    }

    n->next = tmp->next;
    n->prev = tmp;
    
    if
    {
        (tmp->next != NULL)
        tmp->next->prev = n;
    }
    tmp->next = n;
}

void delN(int key)
{
    Node *tmp = head;
    while
    {
        (tmp != NULL && tmp->data != key)
        tmp = tmp->next;
    }

    if
    {
        (tmp == NULL)
        cout << "Node not found." << endl;
        return;
    }

    if
    {
        (tmp->prev != NULL)
        tmp->prev->next = tmp->next;
    }
    else
    {
        head = tmp->next;
    }

    if
    {
        (tmp->next != NULL)
        tmp->next->prev = tmp->prev;
    }

    delete tmp;
    cout << "Node deleted." << endl;
}

void search(int key)
{
    Node *tmp = head;
    int pos = 1;
    while
    {
        (tmp != NULL)
        if
        {
            (tmp->data == key)
            cout << "Node found at position " << pos << endl;
            return;
        }
        tmp = tmp->next;
        pos++;
    }
    cout << "Node not found." << endl;
}

void disp()
{
    Node *tmp = head;
    cout << "List: NULL <-> ";
    while
    {
        (tmp != NULL)
        cout << tmp->data << " <-> ";
        tmp = tmp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    int ch, val, key;
    do
    {
        cout << "\n--- DLL Menu ---" << endl;
        cout << "1. Insert First" << endl;
        cout << "2. Insert Last" << endl;
        cout << "3. Insert After Node" << endl;
        cout << "4. Delete Node" << endl;
        cout << "5. Search Node" << endl;
        cout << "6. Display" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter value: ";
            cin >> val;
            insF(val);
            break;
        case 2:
            cout << "Enter value: ";
            cin >> val;
            insL(val);
            break;
        case 3:
            cout << "Enter node value to insert after: ";
            cin >> key;
            cout << "Enter new value: ";
            cin >> val;
            insA(key, val);
            break;
        case 4:
            cout << "Enter value to delete: ";
            cin >> val;
            delN(val);
            break;
        case 5:
            cout << "Enter value to search: ";
            cin >> val;
            search(val);
            break;
        case 6:
            disp();
            break;
        case 0:
            cout << "Exiting." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
        }
    } while (ch != 0);

    return 0;
}
/*
 * Name - Arnav Chandla
 * Roll No. - 1024170259
 */
