#include<iostream>
using namespace std;
int main() {
	float a, b;
	char ch;
	cout << "����a��b" << endl;
	cin >> a >> b;
	cout << "����+-*%/����֮һ" << endl;
	cin >> ch;
	switch (ch) {
	case'+':
		cout << "a+b=" << a + b << endl;
		break;
	case'-':
		cout << "a-b=" << a - b << endl;
		break;
	case'*':
		cout << "a*b=" << a * b << endl;
		break;
	case'%':
		cout << "a % b=" << int(a) %int( b) << endl;
		break;
	case'/':
		cout << "a/b=" << a / b << endl;
		break;
	}
}