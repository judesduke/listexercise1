#include <iostream>
#include "list.h"
using namespace std;

void main()
{
	//Sample Code
	List mylist;
	mylist.pushToHead('k');
	mylist.pushToHead('e');
	mylist.pushToHead('n');
	mylist.pushToTail('c');
	mylist.pushToTail('o');
	mylist.pushToTail('s');
	mylist.pushToTail('h');
	//mylist.pushToTail('n');
	cout << "MY LIST IS :  "; mylist.print(); 
	cout << endl << "POP HEAD : MY HEAD OF LIST IS " << mylist.popHead();
	cout << endl << "NEW LIST IS : "; mylist.print();
	cout << endl << "POP TAIL : MY TAIL OF LIST IS " << mylist.popTail();
	cout << endl << "NEW LIST IS : "; mylist.print();
	cout << endl << "SEARCH H IS ";
	if (mylist.search('h'))
		cout << "FOUND";
	else
		cout << "NOT FOUND";
	cout << endl;
	mylist.reverse();
	cout << endl;
	mylist.print();
	cout << endl;
	system("pause");


	//TO DO! Write a program that tests your list library - the code should take characters, push them onto a list, 
	//- then reverse the list to see if it is a palindrome!

}