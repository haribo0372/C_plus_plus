#include "list.h"

void list::push_back(string val) {
	Node* p = new Node(val);
	if (is_empty()) {
		first = p;
		last = p;
		return;
	}
	last->next = p;
	last = p;
}

void list::print() {
	if (is_empty()) return;
	Node* p = first;
	while (p) {
		cout << p->value << " ";
		p = p->next;
	}
	cout << "\n";
}

Node* list::find(string val) {
	if (is_empty()) return nullptr;
	Node* p = first;
	while (p && p->value != val) p = p->next;
	return (p && p->value == val) ? p : nullptr;
}

void list::remove_first()
{
	if (is_empty()) return;
	Node* p = first;
	first = p->next;
	delete p;
}

void list::remove_last() {
	if (is_empty()) return;
	if (first == last) {
		remove_first();
		return;
	}
	Node* p = first;
	while (p && p->next != last) p = p->next;
	p = nullptr;
	delete last;
	last = p;
}