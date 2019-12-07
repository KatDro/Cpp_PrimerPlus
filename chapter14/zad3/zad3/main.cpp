#include <iostream>
#include "QueueTp.h"
#include "worker.h"

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	static int size = 3;
	cout << "Witam w pracowniczej kolejce. Kolejka obsluguje " << size << " pracownikow." << endl;
	QueueTp <Worker*> workers (3);
	Worker* ptemp = new Worker;
	while (!workers.isfull())
	{
		ptemp = new Worker;
		ptemp->get();
		workers.enqueue(ptemp);
	}
	while (!workers.isempty())
	{
			workers.dequeue(ptemp);
			ptemp->data();
	}
	delete ptemp;
	
	/*QueueTp<Worker*> kolejka(3);
	Worker jeden("Taki jeden", 1234);
	Worker dwa;
	dwa.get();
	Worker trzy("Trzeci obiekt", 321876);
	Worker* pWorker = new Worker;
	pWorker = &jeden;
	kolejka.enqueue(pWorker);
	pWorker = &dwa;
	kolejka.enqueue(pWorker);
	pWorker = &trzy;
	kolejka.enqueue(pWorker);

	kolejka.dequeue(pWorker);
	pWorker->data();
	kolejka.dequeue(pWorker);
	pWorker->data();
	kolejka.dequeue(pWorker);
	pWorker->data();*/
}
