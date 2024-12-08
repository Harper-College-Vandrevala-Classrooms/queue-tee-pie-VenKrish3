#include <iostream>
#include "Cutie"

using namespace std;

class Queue
{
private:
    struct Node
	{
        Cutie data; // @suppress("Type cannot be resolved")
        Node* next;
        Node(const Cutie& val) : data(val), next(nullptr)// @suppress("Type cannot be resolved")
        {}
    };

    Node* front;
    Node* back;

public:
    Queue():front(nullptr), back(nullptr) {}

    ~Queue() {
        while (front) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }

    void enqueue(const Cutie& val) // @suppress("Type cannot be resolved")
    {
        Node* temp = new Node(val);

        if (back == nullptr) {
            front = back = temp;
        } else {
            back->next = temp;
            back = temp;
        }
    }

    void dequeue()
    {
        if (front == nullptr)
        {
            cout << "Queue is empty!" << endl;
            return;
        }

        Node* temp = front;
        front = front->next;

        if (front == nullptr)
        {
            back = nullptr;
        }
        delete temp;
    }

    bool isEmpty() const {
        return front == nullptr;
    }

    int size()
    {
    	int counter;
    	for(int i = front; i != back; i++)
    	{
    		counter = i;
    	}
    	return counter;
    }
};

