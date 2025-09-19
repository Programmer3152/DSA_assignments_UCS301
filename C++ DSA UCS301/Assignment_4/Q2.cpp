#include <iostream>

using namespace std;

#define MAX 5
int cqueue_arr[MAX];
int front = -1, rear = -1;

void enqueue(int val)
{
    if ((front == 0 && rear == MAX - 1) || (rear == (front - 1) % (MAX - 1)))
    {
        cout << "Queue Overflow" << endl; return;
    }
    if (front == -1) front = rear = 0;
    else if (rear == MAX - 1 && front != 0) rear = 0;
    else rear++;
    cqueue_arr[rear] = val;
}

void dequeue()
{
    if (front == -1)
    {
        cout << "Queue Underflow" << endl; return;
    }
    cout << "Dequeued: " << cqueue_arr[front] << endl;
    if (front == rear) front = rear = -1;
    else if (front == MAX - 1) front = 0;
    else front++;
}

void display()
{
    if (front == -1)
    {
        cout << "Queue is empty" << endl; return;
    }
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++) cout << cqueue_arr[i] << " ";
    }
    else
    {
        for (int i = front; i < MAX; i++) cout << cqueue_arr[i] << " ";
        for (int i = 0; i <= rear; i++) cout << cqueue_arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    enqueue(1); enqueue(2); enqueue(3); enqueue(4); enqueue(5);
    display();
    dequeue();
    display();
    enqueue(6);
    display();
    return 0;
}