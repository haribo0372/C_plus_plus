#include <iostream>
#include <string>
#include <vector>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

void numbersInNumber();
void mathvalue();
void ChangeRegisterForchar();
void MinKM();
void ConverteASCII();
void DrawTheTriangle();
void numbers10();
void AlgbrSum();
void AlgbrSumPow();
void MaxMinNum();
void UgolTela();
void Pow();

int main() {
	setlocale(LC_ALL, "RU");
	Pow();
	const int size = 10;
	std::unique_ptr<int[]> data;
	data = std::make_unique<int[]>(size);
}

void numbersInNumber() {
	int num;
	std::cout << "Введи пятизначное число : ";
	std::cin >> num;
	if (10000 <= num && num <= 99999) {
		std::cout << "1 number = " << (num / 10000) % 10 << std::endl;
		std::cout << "2 number = " << (num / 1000) % 10 << std::endl;
		std::cout << "3 number = " << (num / 100) % 10 << std::endl;
		std::cout << "4 number = " << (num / 10) % 10 << std::endl;
		std::cout << "5 number = " << (num) % 10 << std::endl;
	}
	else {
		std::cout << "Error with lenth of number";
	}
}

void mathvalue() {
	int a, b, f, x;
	std::cout << "Введите цифры a, b и f:\na=";
	std::cin >> a;
	std::cout << "b=";
	std::cin >> b;
	std::cout << "f=";
	std::cin >> f;
	std::cout << "Вычисляем по формуле : x=(a + b - f / a) + f * a * a - (a + b)" << std::endl;
	x = (a + b - f / a) + f * a * a - (a + b);
	std::cout << "x=" << x << std::endl;
}

void ChangeRegisterForchar() {
	std::cout << "Введите букву для изменения регистра:" << std::endl;
	char ch;
	std::cin >> ch;
	char f = std::tolower(ch);
	if (ch == f) {
		ch = std::toupper(ch);
		std::cout << "Та же буква в верхнем регистре: " << ch << std::endl;
	}
	else {
		std::cout << "Та же буква в нижнем регистре: " << f << std::endl;
	}
}

void MinKM() {
	std::cout << "Введите количество метров: ";
	float m;
	std::cin >> m;
	float km = m / 1000;
	std::cout << m << "м = " << km << "km" << std::endl;
}

void ConverteASCII() {
	int n[8] = { 213,211,201,150,209,206,209,200 };
	for (int i = 0; i < 8; i++) {
		std::cout << static_cast<char>(n[i]);
	}
	cout << std::endl;
}

void DrawTheTriangle() {
	string str = "";
	short count = 0;
	while (count < 8) {
		str += "+";
		cout << str << endl;
		count++;
	}
}

void numbers10() {
	int a, b, c;
	cout << "Введите 1 число: ";
	cin >> a;
	cout << "Введите 2 число: ";
	cin >> b;
	cout << "Введите 3 число: ";
	cin >> c;
	if (a == b || a == c || b == c) {
		a += 5;
		b += 5;
		c += 5;
		cout << "\n1 число: " << a << "\n2 число: " << b << "\n3 число: " << c << endl;
	}
	else {
		cout << "\nНет двух равных чисел" << endl;
	}
}

void AlgbrSum() {
	int n;
	cout << "Введи кол-во иксов : ";
	cin >> n;
	vector <double> vec(n);
	for (int i = n - (n - 1); i <= n; i++) {
		cout << "Введите значения Z, B, A, Betta для X" << i << ":" << endl;
		float Z, B, A, Betta;
		double x;
		cout << "Z = ";
		cin >> Z;
		cout << "B = ";
		cin >> B;
		cout << "A = ";
		cin >> A;
		cout << "Betta = ";
		cin >> Betta;
		x = pow(Z, 3) - B + pow(A, 2) / pow(tan(Betta), 2);
		vec.push_back(x);
	}
	double sum = 0;
	for (int i = 0; i < vec.size(); i++) {
		sum += vec[i];
	}
	cout << "Y = " << sum << endl;
}

void AlgbrSumPow() {
	int N, k;
	cout << "Введите N: ";
	cin >> N;
	cout << "Введите k: ";
	cin >> k;
	double sum = 0;
	for (int num = 1; num <= N; num++) {
		sum += pow(num, k);
	}
	cout << "Сумма: " << sum << endl;
}

void MaxMinNum() {
	cout << "Введите число не большее 99: ";
	int number;
	cin >> number;
	if (number > 99) {
		cout << "Error ЫЫЫЫ";
	}
	else {
		cout << max(number % 10, (number / 10) % 10) << " - большая цифра" << endl;
		cout << min(number % 10, (number / 10) % 10) << " - меньшая цифра" << endl;
	}
}

void UgolTela() {
	float v, t;
	cout << "V = ";
	cin >> v;
	cout << "t = ";
	cin >> t;
	double alpha = (asin((9.81 * t) / (2 * v)) * 180) / M_PI;
	cout << "Alpha = " << alpha << endl;
}

void Pow() {
	int num, k;
	cout << "Enter number: ";
	cin >> num;
	cout << "Enter power: ";
	cin >> k;
	int copy = num;
	for (int i = 1; i < k; i++) {
		num *= copy;
	}
	cout << "number = " << num << endl;
}