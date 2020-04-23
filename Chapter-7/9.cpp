// Queue
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