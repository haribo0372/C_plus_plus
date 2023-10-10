#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <map>

using namespace std;

namespace Tasks1 {

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
	/* Дан одномерный массив, длину массива задаёт пользователь. Вычислить сумму квадратов тех чисел,
	модуль которых превышает значение 2,5. */

	void SumQuad() {
		int len;
		cout << "Input the length for array: ";
		cin >> len;
		float* array = new float[len];
		float sum = 0;
		for (int i = 0; i < len; i++) {
			array[i] = (float)(rand() % 100) / (rand() % 100 + 2);
			cout << i + 1 << fixed << setprecision(2) << ". " << array[i] << " " << endl;
			if (abs(array[i]) > 2.5) {
				sum += (float) pow(array[i], 2);
			}
		}
		cout << "\n\n------------ Sum : " << sum << " ------------" << endl;
	}
	bool duplicateChars(string str) {
		short count = 0;
		for (int i = 0; i < str.length(); i++) {
			for (int j = i + 1; j < str.length(); j++) {
				if (tolower(str[i]) == tolower(str[j])) {
					count++;
				}
			}
		}
		return (count != 0);
	}

	string getInitials(string str) {
		//getline(cin, str)
		unsigned short i = 0;
		string result;
		result += str[0];
		while (i < str.length()) {
			if (str[i] == ' ') {
				result += str[i + 1];
				i++;
			}
			else {
				i++;
			}
		}
		return result;
	}

	int differenceEvenOdd(int array[5]) {
		int sumcht = 0;
		int sumnecht = 0;
		for (int i = 0; i < 5; i++) {
			if (array[i] % 2 == 0) {
				sumcht += array[i];
			}
			else {
				sumnecht += array[i];
			}
		}
		return (max(sumcht, sumnecht) - min(sumcht, sumnecht));
	}

	bool equalToAvg(int array[5]) {
		int sum = 0;
		for (int i = 0; i < 5; i++) {
			sum += array[i];
		}
		for (int i = 0; i < 5; i++) {
			if (array[i] == ((float)sum / 5)) {
				return true;
			}
		}
		return false;
	}

	void indexMult(int array[5]) {
		for (int i = 0; i < 5; i++) {
			array[i] *= i;
		}
	}

	string reverse(string str) {
		int len = (int) str.length();
		string result;
		for (int i = 0; i < str.length(); i++) {
			int j = (int)abs(i - (len - 1));
			result += str[j];
		}
		return result;
	}

	int Tribonacci(int x) {
		int* array = new int[x];
		array[0] = 0;
		array[1] = 0;
		array[2] = 1;
		for (int i = 3; i < x; i++) {
			array[i] = array[i - 3] + array[i - 2] + array[i - 1];
		}
		return array[x - 1];
	}

	string pseudoHash(int x) {
		char chars[15] = { 'a', 'b', 'c' , 'd', 'e' , 'f' , '1', '2', '3', '4' , '5', '6', '7' , '8', '9' };
		string hash;
		int i = 0;
		while (i != x) {
			short ran = 0 + rand() % 15;
			hash += chars[ran];
			i++;
		}
		return hash;
	}

	string botHelper(string str) {
		if (str.find("help") != string::npos) {
			return "Calling for a staff member";
		}
		else {
			return "Keep waiting";
		}
	}

	bool isAnagram(string fs, string ss) {
		sort(fs.begin(), fs.end());
		sort(ss.begin(), ss.end());
		return (fs == ss);
	}

	string isPalindrome(int num) {
		string str = reverse(to_string(num));
		if (to_string(num) == str) {
			return "Is palindrome";
		}
		else {
			return "Is not palindrome";
		}
	}
	string DayInWeek(int key) {
		map<int, string> week;
		week[1] = "Monday";
		week[2] = "Tuesday";
		week[3] = "Wednesday";
		week[4] = "Thursday";
		week[5] = "Friday";
		week[6] = "Saturday";
		week[7] = "Sunday";
		return week[key];
	}

	void countBracket(string file_name) {
		ifstream file(file_name);
		if (!file.is_open()) {
			cout << "File not found";
		}
		else {
			int countBrOpen = 0;
			int countBrClose = 0;
			char ch;
			file >> ch;
			while (ch) {
				cout << ch << "\n";
				if (ch == '{') {
					countBrOpen++;
					if (countBrClose > countBrOpen) break;
				}
				else if (ch == '}') {
					countBrClose++;
					if (countBrClose != countBrOpen) break;
				}
				file >> ch;
			}
			file.close();

			if (countBrOpen == 0 && countBrClose == 0) {
				cout << "Curly brackets are not found";
			}
			else if (countBrOpen+1 == countBrClose) {
				cout << "Balance is so good";
			}
			else {
				cout << countBrOpen << " " << countBrClose << " The balance is broken";
			}
		}
	}

	float ChainShot(int x) {
		float result = 2.0;
		for (int i = 1; i < x; i++) {
			result = 1 + 1 / result;
		}
		return result;
	}
}