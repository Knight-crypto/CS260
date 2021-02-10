struct Queue {
	Node* front, * rear;
	Queue()
	{
		front = rear = NULL;
	}

	void enQueue(int x)
	{

		//Create a linked list node 
		Node* temp = new Node(x);

		//If queue only has 1 value it is front and rear both
		if (rear == NULL) {
			front = rear = temp;
			return;
		}

		//Add the new node at the end of queue and change rear 
		rear->next = temp;
		rear = temp;
	}

	//deQueue function
	void deQueue()
	{
		//If queue is empty, return NULL. 
		if (front == NULL)
			return;

		//Store the previous front and move the front one node ahead 
		Node* temp = front;
		front = front->next;

		//If front becomes NULL then so is rear
		if (front == NULL)
			rear = NULL;

		delete (temp);
	}
};
