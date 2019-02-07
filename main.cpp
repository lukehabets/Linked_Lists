#include "list.h"
#include <iostream>

int main(int argc, char** argv) {
	List l1;
	int value = 1;
	while(value != 5){
	cout << endl << endl<< "1. Insert" << endl << "2. Search" << endl << "3. Remove Current Node" << endl << "4. Display" << endl << "5.Quit" << endl << endl;
	cin >> value;
	if (value==1)
	l1.insert();
	if(value == 2)
	l1.search();
	if(value == 3)
	l1.remove();
	if(value ==4)
	cout << l1;
}
	return 0;
}
