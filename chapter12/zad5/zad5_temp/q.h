#pragma once

class Customer
{
private:
	long arrive;
	int processtime;
public:
	Customer() { arrive = 0; processtime = 0; }
	//set time of arrive to queue and set random time from 1 to 3 of service 
	void set(long when);
	long when() const { return arrive; }
	int ptime() const { return processtime; }
};

typedef Customer Item;

class Queue
{
private:
	//local struct, accessible from class
	struct Node
	{
		Item item;
		struct Node* next;
	};
	enum { Q_SIZE = 10 };
	Node* front; //first element
	Node* rear; //last element
	int items; //amount of elemnet in queue
	const int qsize; //maximum elements in queue
	//public method, which block using them outside of class
	Queue(const Queue& q) : qsize(0) { }
	Queue& operator = (const Queue& q) { return *this; }
public:
	Queue(int qs = Q_SIZE);
	~Queue();
	bool isempty() const;
	bool isfull() const;
	int queuecount() const;
	//add elements to queue
	bool enqueue(const Item& item);
	//remove element from queue
	bool dequeue(Item& item);
};

