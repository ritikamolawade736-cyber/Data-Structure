#include <iostream>
using namespace std;

int queue[5], front = -1, rear = -1;

// Insertion (Enqueue)
void insert(int value) {
    if(rear == 4) {
        cout << "Queue Overflow\n";
    }
    else {
        if(front == -1)
            front = 0;
        rear++;
        queue[rear] = value;
        cout << value << " inserted into queue\n";
    }
}

// Deletion (Dequeue)
void del() {
    if(front == -1 || front > rear) {
        cout << "Queue Underflow\n";
    }
    else {
        cout << queue[front] << " deleted from queue\n";
        front++;
    }
}

// Display
void display() {
    if(front == -1 || front > rear) {
        cout << "Queue is empty\n";
    }
    else {
        cout << "Queue elements: ";
        for(int i = front; i <= rear; i++)
            cout << queue[i] << " ";
        cout << endl;
    }
}

int main() {
    int choice, value;

    do {
        cout << "\n1. Insert\n2. Delete\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                insert(value);
                break;
            case 2:
                del();
                break;
            case 3:
                display();
                break;
        }

    } while(choice != 4);

    return 0;
}