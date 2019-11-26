#pragma once

template <typename T>
class QueueTp
{
private:
	struct Node { T item; struct Node* next; };
	enum {Q_SIZE = 10};
	Node* front;
	Node* rear;
	int items;
	const int qsize;
	QueueTp(const QueueTp & q) : qsize(0) {}
	QueueTp& operator=(const QueueTp& q) { return *this; }
public:
	QueueTp(int qs = Q_SIZE);
	~QueueTp();
	bool isempty()const;
	bool isfull() const;
	int queuecount() const;
	bool enqueue(T& item); // add element to queue
	bool dequeue(T& item); //remove element from queue
};
template <typename T>
QueueTp<T>::QueueTp(int qs) : qsize(qs)
{
	items = 0;
	front = rear = nullptr;
}
template <typename T>
QueueTp<T>::~QueueTp()
{
	Node* temp;
	while (front != nullptr)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}
template <typename T>
bool QueueTp<T>::isempty() const
{
	return (items == 0);
}
template <typename T>
bool QueueTp<T>::isfull() const
{
	return (items == qsize);
}
template <typename T>
int QueueTp<T>::queuecount() const
{
	return items;
}
template <typename T>
bool QueueTp<T>::enqueue(T& item)
{
	if (isfull())
		return false;
	Node* add = new Node;
	add->item = item;
	add->next = nullptr;
	items++;
	if (front == nullptr)
		front = add;
	else
		rear->next = add;
	rear = add;
	return true;
}
template <typename T>
bool QueueTp<T>::dequeue(T& item)
{
	/*if (isempty())
		return false;
	item = front->item;
	items--;
	Node* temp = front;
	front = front->next;
	delete temp;
	if (items == 0)
		rear = nullptr;
	return true;*/
	if (front == nullptr)
		return false;
	item = front->item;
	items--;
	Node* temp = front;
	front = front->next;
	delete temp;
	if (items == 0)
		rear = nullptr;
	return true;
}