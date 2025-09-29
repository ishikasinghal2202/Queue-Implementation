//Ishika Singhal
//PRN: 24070123048
//Code:
#include <iostream>
using namespace std;

#define SIZE 5

class Queue {
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    bool isFull() {
        return (rear + 1) % SIZE == front;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot insert " << x << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % SIZE;
        }
        arr[rear] = x;
        cout << x << " inserted into queue." << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! Nothing to delete." << endl;
            return;
        }
        cout << arr[front] << " removed from queue." << endl;

        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % SIZE;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % SIZE;
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    int choice, val;

    do {
        cout << "\n--- Queue Menu ---\n";
        cout << "1. Enqueue (Add)\n";
        cout << "2. Dequeue (Delete)\n";
        cout << "3. Display Queue\n";
        cout << "4. Check if Empty\n";
        cout << "5. Check if Full\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to enqueue: ";
            cin >> val;
            q.enqueue(val);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.display();
            break;
        case 4:
            cout << (q.isEmpty() ? "Queue is empty." : "Queue is not empty.") << endl;
            break;
        case 5:
            cout << (q.isFull() ? "Queue is full." : "Queue is not full.") << endl;
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 0);

    return 0;
}

//OUTPUT:
//--- Queue Menu ---
//1. Enqueue (Add)
//2. Dequeue (Delete)
//3. Display Queue
//4. Check if Empty
//5. Check if Full
//0. Exit
//Enter your choice: 1
//Enter value to enqueue: 50
//50 inserted into queue.

//--- Queue Menu ---
//1. Enqueue (Add)
//2. Dequeue (Delete)
//3. Display Queue
//4. Check if Empty
//5. Check if Full
//0. Exit
//Enter your choice: 
