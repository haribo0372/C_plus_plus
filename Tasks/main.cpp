#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include "Tasks1.h"
#include "list.h"

using namespace std;
using namespace Tasks1;

struct Try {
	char a;
	int b;
	Try() : a('u'), b(19) {}
};

int main() {
	setlocale(LC_ALL, "RU");
	//srand(time(NULL));
	string str = "Drova";
	if (str.find('D') != string::npos) {
		cout << "есть";
	}
	else {
		cout << "нету";
	}
}