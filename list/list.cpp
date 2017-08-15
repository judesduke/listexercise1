#include <iostream>
#include "list.h"
using namespace std;

List::~List() {
	for (Node *p; !isEmpty(); ) {
		p = head->next;
		delete head;
		head = p;
	}
}

void List::pushToHead(char el)
{
	head = new Node(el, head);
	if (tail == 0)
	{
		tail = head;
	}
}
void List::pushToTail(char el)
{
	Node *tmp = new Node(el, 0);
	if (head == 0) {
		tail = tmp;
		head = tail;
	}
	else {
		tail->next = tmp;
		tail = tail->next;
	}
}
char List::popHead()
{
	char el = head->data;
	Node *tmp = head;
	if (head == tail)
	{
		head = tail = 0;
	}
	else
	{
		head = head->next;
	}
	delete tmp;
	return el;
}
char List::popTail()
{
	// TO DO!
	char el = tail->data;
	Node *tmp = tail;
	if (head == tail)
		head = tail = 0;
	else
	{
		Node *p = head;
		while (p->next != tail)
		{
			p = p->next;
		}
		tail = p;
		p->next = 0;
		delete tmp;
	}
	return el;
}
bool List::search(char el)
{
	// TO DO! (Function to return True or False depending if a character is in the list.
	Node *p;
	p = head;
	while (p != tail) {
		if (p->data == el) {
			return true;
		}
		p = p->next;
	}
	return false;
}
void List::reverse()
{
	// TO DO! (Function is to reverse the order of elements in the list.
	Node *p;
	List copy;
	if (head == 0) cout << "This list is empty";
	else {
		p = head;
		while (p != 0) {
			copy.pushToTail(p->data);
			p = p->next;
		}
		while (head != tail) {
			if (popHead() != popTail()) {
				cout << "This list is not palindrome";
				break;
			}
		}
		popHead();
		char c;
		while (copy.head != 0) {
			c = copy.popHead();
			pushToHead(c);
		}
	}
}
void List::print()
{
	if (head == tail)
	{
		cout << head->data;
	}
	else
	{
		Node *tmp = head;
		while (tmp != tail)
		{
			cout << tmp->data;
			tmp = tmp->next;
		}
		cout << tmp->data;
	}
}