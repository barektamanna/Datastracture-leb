#include <iostream>

#define size 10

using namespace std;



int que[10];
int front = 0;
int rear = 0;
int maxSize = 10;



bool isEmpty() {
    if ((front == 0 && rear == 0) || (front == rear)) {
        return true;
    }
    else {
        return false;
    }
}



bool isFull() {
    if (rear == maxSize) {
        return true;
    }
    else {
        return false;
    }
}



bool enQueue(int elem) {
    cout << "EnQueue: " << elem << endl;
    cout << "Current Front: " << front << " " << "Current Rear: " << rear << endl;
    if (isFull()) {
        cout << "Queue is Full" << endl;
        return false;
    }
    else {
        que[rear] = elem;
        rear = rear + 1;
        cout << "New Front: " << front << " " << "New Rear: " << rear << endl;
        return true;
    }
}



bool deQueue() {
    cout << "Dequeue:" << endl;
    cout << "Current Front: " << front << " " << "Current rear: " << rear << endl;
    if (isEmpty()) {
        cout << "Queue is Empty" << endl;
        return true;
    }
    else {
        cout << "Dequeue Element: " <<  que[front] << endl;
        front = front + 1;
        cout << "New Front: " << front << " " << "New Rare: " << rear << endl;
        return false;
    }
}



int frontElement() {



}



void show() {
    if(isEmpty){



       cout << "NOT SHOW"<<endl;



   }



   for(int i=front ; i<=rear ; i++)
        cout<<que[front]<<endl;
}



int main()
{
    enQueue(20);
    enQueue(30);
    enQueue(35);
    enQueue(40);
    enQueue(45);
    enQueue(50);
    enQueue(55);
    enQueue(60);


    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();




   frontElement();



   show();



   return 0;
}
