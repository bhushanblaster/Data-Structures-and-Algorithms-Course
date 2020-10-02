#include<iostream>

using namespace std;

template<typename T>
class Queue
{
	T* arr;
	int nextIndex;
	int firstIndex;
	int size;
	int capacity;

public:
	Queue();
	Queue(int capacity);
	T front();
	void push(T item);
	void pop();
	bool isEmpty();
};

template<typename T>
Queue<T>::Queue()
{
	nextIndex = 0;
	firstIndex = -1;
	size = 0;
	capacity = 5;
	arr = new T[5];
}

template<typename T>
Queue<T>::Queue(int capacity)
{
	this.capacity = capacity;
	nextIndex = 0;
	firstIndex = -1;
	size = 0;
	arr = new T[capacity];
}

template<typename T>
bool Queue<T>::isEmpty()
{
	return size == 0;
}
template<typename T>
void Queue<T>::push(T item)
{
	if (size == capacity)
		cout << "Queue is full"<<endl;
	else
	{
		arr[nextIndex] = item;
		nextIndex = (nextIndex + 1) % capacity;
		if (firstIndex == -1)
			firstIndex = 0;
		size++;
	}
}
template<typename T>
T Queue<T>::front()
{
	if (size == 0)
		return 0;
	else
	{
		return arr[firstIndex];
	}
}

template<typename T>
void Queue<T>::pop()
{
	if (size == 0)
		cout << "\nQueue is empty";
	else
	{
		size--;
		firstIndex = (firstIndex + 1) % capacity;
	}
}

int main()
{
	Queue<int>intQ;
	intQ.push(10);
	intQ.push(20);
	intQ.push(30);
	intQ.push(40);
	intQ.push(50);
	intQ.push(60);
	intQ.push(70);
	cout << intQ.front()<<endl;
	intQ.pop();
	cout << intQ.front()<<endl;
	intQ.pop();
	cout << intQ.front() << endl;
	intQ.pop();
	cout << intQ.front() << endl;
	intQ.push(80);
	intQ.push(90);
	intQ.push(100);
	intQ.push(110);
	cout << intQ.front() << endl;
	intQ.pop();
	cout << intQ.front() << endl;
	intQ.pop();
	cout << intQ.front() << endl;
	intQ.pop();
	cout << intQ.front() << endl;
	intQ.pop();
	cout << intQ.front() << endl;
	intQ.pop();	
}

/*
output

Queue is full
Queue is full
10
20
30
40
Queue is full
40
50
80
90
100
Press any key to continue . . .
*/
