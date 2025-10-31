/*
* Approach:
* This program uses a 'last' pointer (initially NULL) to manage the
* circular list. The 'head' of the list is always 'last->next'.
* This makes inserting at the end or beginning O(1) time complexity.
* - Insertion (First): New node's 'next' points to head ('last->next').
* 'last->next' is updated to point to the new node.
* - Insertion (Last): Same as 'Insert First', but 'last' is also
* updated to point to the new node.
* - Deletion/Search: Traverses the list using a 'do-while' loop starting
* from 'last->next' (head) and stopping when it returns to 'last->next'.
* Special care is taken when deleting the 'head' or 'last' node.
*/
#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *last = NULL;

void insF(int val)
{
    Node *n = new Node;
    n->data = val;
    if
    {
        (last == NULL)
        last = n;
        n->next = last;
    }
    else
    {
        n->next = last->next;
        last->next = n;
    }
}

void insL(int val)
{
    Node *n = new Node;
    n->data = val;
    if
    {
        (last == NULL)
        last = n;
        n->next = last;
    }
    else
    {
        n->next = last->next;
        last->next = n;
        last = n;
    }
}

void insA(int key, int val)
{
    if
    {
        (last == NULL)
        cout << "List is empty." << endl;
        return;
    }

    Node *tmp = last->next;
    do
    {
        if (tmp->data == key)
        {
            Node *n = new Node;
            n->data = val;
            n->next = tmp->next;
            tmp->next = n;
            if (tmp == last)
            {
                last = n;
            }
            return;
        }
        tmp = tmp->next;
    } while (tmp != last->next);

    cout << "Node not found." << endl;
}

void delN(int key)
{
    if
    {
        (last == NULL)
        cout << "List is empty." << endl;
        return;
    }

    Node *curr = last->next;
    Node *prev = last;

    do
    {
        if (curr->data == key)
        {
            if (curr == last->next && curr == last)
            {
                last = NULL;
            }
            else if (curr == last->next)
            {
                last->next = curr->next;
            }
            else if (curr == last)
            {
                prev->next = last->next;
                last = prev;
            }
            else
            {
                prev->next = curr->next;
            }
            delete curr;
            cout << "Node deleted." << endl;
            return;
        }
        prev = curr;
        curr = curr->next;
    } while (curr != last->next);

    cout << "Node not found." << endl;
}

void search(int key)
{
    if
    {
        (last == NULL)
        cout << "List is empty." << endl;
        return;
    }

    Node *tmp = last->next;
    int pos = 1;
    do
    {
        if (tmp->data == key)
        {
            cout << "Node found at position " << pos << endl;
            return;
        }
        tmp = tmp->next;
        pos++;
    } while (tmp != last->next);

    cout << "Node not found." << endl;
}

void disp()
{
    if
    {
        (last == NULL)
        cout << "List is empty." << endl;
        return;
    }

    Node *tmp = last->next;
    cout << "List: ";
    do
    {
        cout << tmp->data << " -> ";
        tmp = tmp->next;
    } while (tmp != last->next);
    cout << "(head: " << last->next->data << ")" << endl;
}

int main()
{
    int ch, val, key;
    do
    {
        cout << "\n--- CLL Menu ---" << endl;
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
