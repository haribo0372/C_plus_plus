#pragma once
#include <string>
#include <iostream>

using namespace std;

struct Node {
	string value;
	Node* next;
	Node(string val) : value(val), next(nullptr) {}
};

struct list {
	Node* first;
	Node* last;

	list() : first(nullptr), last(nullptr) {}

	bool is_empty() {
		return (first == nullptr);
	}
	void push_back(string val);
	void print();
	Node* find(string val);
	void remove_first();
	void remove_last();
};
