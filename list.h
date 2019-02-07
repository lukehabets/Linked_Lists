#ifndef LIST_H
#define LIST_H
#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

class List
{
	public:
		List();
		~List();
		void insert(void);
		void search(void);
		void remove(void);	
		friend ostream& operator <<(ostream&, const List&);
	private:
		Node* head;
		Node* current;
		Node* temp;
};

#endif
