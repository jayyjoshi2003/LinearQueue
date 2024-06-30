#include <iostream>
using namespace std;
#define size 8
class Queue
{
private:
    int queue[size];
    int front;
    int rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    bool isEmpty()
    {
        if (front == -1)
            return true;
        else
            return false;
    }

    bool isFull()
    {
        if (rear == size - 1)
            return true;
        else
            return false;
    }

    void enQueue(int data)
    {
        if (isFull())
        {
            cout << "Queue is Full" << endl;
            return;
        }
        if (isEmpty())
            front = 0;
        rear++;
        queue[rear] = data;
    }

    void deQueue()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return;
        }
        if (front > rear)
        {
            front = -1;
        }
        else
        {
            cout << "Popped element: " << queue[front] << endl;
            front++;
        }
    }

    void Display()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        return queue[front];
    }
};

int main()
{
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);
    q.enQueue(6);
    q.enQueue(7);
    q.enQueue(8);
    q.Display();
    q.deQueue();
    q.Display();
    cout << "Front element: " << q.peek();

    return 0;
}