#include "list.h"
#include <iostream>
#include <stdio.h>
using namespace std;

List::List(){
	head = 0;
	current = 0;
	temp = 0;
}
List::~List(){
}

void List::insert(void){
	int value;
	do{
	cout << "Enter a value: " << endl;
	cin >> value;
	}
	while(value<0);
	if(head==0){
		head = new Node;
		head -> data = value;
		head -> next = 0;
		current = head;
	}
	else if(head!=0 && current -> next == 0)
	{
		temp = new Node;
		temp -> data = value;
		current -> next = temp;
		temp -> next = 0;
		current = temp;
		temp = 0;
	}
	else if(head!=0 && current -> next != 0)
	{
		temp = new Node;
		temp -> next = current -> next;
		current -> next = temp;
		temp -> data = value; 
	}
}
void List::search(){
	bool result = false;
	int value;
	cout << "What are you looking for? " << endl;
	cin >> value;
	current = head;
	while(result == false){
	if(current->data == value){
		result = true;
		cout << "Search Found!" << endl;
	}
	else if (current -> next == 0){
		cout << "Search Result Not Found!" << endl;
		result = true;
	}
	else
	current = current -> next;
}
}
void List::remove(){
	if(current==0 && head==0)
	cout << "Nothing to delete" << endl;
	else if(current == head && current -> next == 0)
	{
		cout << current -> data << endl << "Deleted" << endl;
		delete head;
		head = 0;
		current = 0;
		temp = 0;
	}
	else if(current == head && current -> next != 0){
		cout << current -> data << endl << "Deleted" << endl;
		temp = current -> next;
		delete head;
		head = temp;
		current = head;
	}
	else if(current != head && current -> next != 0){
		cout << current -> data << endl << "Deleted" << endl;
		temp = head;
		while(temp -> next != current)
		temp = temp -> next;
		temp -> next = current -> next;
		delete current;
		current = 0;
		current = temp -> next;
	}
}
ostream& operator<<(ostream& toConsole, const List& templist){
	Node *n;
	for(n = templist.head; n!=0; n = n -> next){
		toConsole << n -> data << endl;
	}
	return toConsole;
}
