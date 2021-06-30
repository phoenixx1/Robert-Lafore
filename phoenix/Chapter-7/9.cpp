/*
A queue is a data storage device much like a stack. The difference is that in a stack the
last data item stored is the first one retrieved, while in a queue the first data item stored
is the first one retrieved. That is, a stack uses a last-in-first-out (LIFO) approach, while a
queue uses first-in-first-out (FIFO). A queue is like a line of customers in a bank: The
first one to join the queue is the first one served.
Rewrite the STAKARAY program from this chapter to incorporate a class called queue
instead of a class called stack . Besides a constructor, it should have two functions: one
called put() to put a data item on the queue, and one called get() to get data from the
queue. These are equivalent to push() and pop() in the stack class.Both a queue and a stack use an array to hold the data. However, instead of a single int
variable called top , as the stack has, you’ll need two variables for a queue: one called
head to point to the head of the queue, and one called tail to point to the tail. Items
are placed on the queue at the tail (like the last customer getting in line at the bank) and
removed from the queue at the head. The tail will follow the head along the array as
items are added and removed from the queue. This results in an added complexity:
When either the tail or the head gets to the end of the array, it must wrap around to the
beginning.
*/
//author @Nishant
#include<bits/stdc++.h>
using namespace std;

class Queue
{
	private:
		static const int MAX = 100;
		int a[MAX];
		int head, tail;
	public:
		Queue() {head = 0; tail = 0;}
		void put(int value){
            a[tail++ % 100] = value;
        }
		int get(void){
            return a[(100 - head--) % 100];
        }
};

int main()
{
	Queue q;
	q.put(11);
	q.put(22);
	cout << "1: " << q.get() << endl;
	cout << "2: " << q.get() << endl;
	q.put(33);
	q.put(44);
	q.put(55);
	q.put(66);
	cout << "3: " << q.get() << endl;
	cout << "4: " << q.get() << endl;
	cout << "5: " << q.get() << endl;
	cout << "6: " << q.get() << endl;
	return 0;
}