#include <iostream>
#include <string>
#include "Tasks1.h"

using namespace std;
using namespace Tasks1;

int main() {
	setlocale(LC_ALL, "RU");
	//srand(time(NULL));
	cout << "Day : ";
	int key;
	cin >> key;
	cout << DayInWeek(key);
}
//Исправить ошибку с переполнением буфера в Tasks1.cpp/Tribonachi::270
