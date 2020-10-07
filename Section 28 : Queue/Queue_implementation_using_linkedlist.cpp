template<typename T>
class Node
{
public:
	T data;
	Node* next;
	Node(T data = 0)
	{
		this->data = data;
		next = NULL;
	}
};

template<class T>
class QueueLL
{
	Node<T>* head;
	Node<T>* tail;
	int size;
public:
	QueueLL();
	void push(T item);
	void pop();
	T front();
	bool isEmpty();
	int getSize();
};

template<class T>
QueueLL<T>::QueueLL()
{
	head = tail = NULL;
	size = 0;
}
template<class T>
void QueueLL<T>::push(T item)
{
	Node<T>* temp = new Node<T>(item);
	if (head == NULL)
	{
		head = temp;
		tail = temp;
	}
	else
	{
		tail->next = temp;
		tail = tail->next;
	}
	cout << "\nInserted" << item;
	size++;
}

template<class T>
int QueueLL<T>::getSize()
{
	return size;
}
template<class T>
bool QueueLL<T>::isEmpty()
{
	return size == 0;
}
template<class T>
T QueueLL<T>::front()
{
	if (isEmpty())
		return 0;
	else
		return head->data;
}
template<class T>
void QueueLL<T>::pop()
{
	if (isEmpty())
		cout << "\nQueue is empty. Can't pop.";
	else
	{
		Node<T>* temp = head;
		head = head->next;
		cout << "\nRemoved " << temp->data;
		delete temp;
		size--;
	}
}

int main()
{
	QueueLL<int>intQ; 
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
Output

Inserted10
Inserted20
Inserted30
Inserted40
Inserted50
Inserted60
Inserted7010

Removed 1020

Removed 2030

Removed 3040

Inserted80
Inserted90
Inserted100
Inserted11040

Removed 4050

Removed 5060

Removed 6070

Removed 7080

Removed 80Press any key to continue . . .
*/
