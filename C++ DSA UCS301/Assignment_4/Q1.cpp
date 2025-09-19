#include <iostream>

using namespace std;

#define MAX 5
int queue_arr[MAX];
int front = -1, rear = -1;

void enqueue(int val)
{
    if (rear == MAX - 1)
    {
        cout << "Queue Overflow" << endl; return;
    }
    if (front == -1) front = 0;
    rear++;
    queue_arr[rear] = val;
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue Underflow" << endl; return;
    }
    cout << "Dequeued: " << queue_arr[front] << endl;
    front++;
}

void display()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is empty" << endl; return;
    }
    for (int i = front; i <= rear; i++) cout << queue_arr[i] << " ";
    cout << endl;
}

int main()
{
    enqueue(1); enqueue(2); enqueue(3);
    display();
    dequeue();
    display();
    return 0;
}