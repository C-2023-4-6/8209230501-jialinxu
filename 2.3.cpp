#include<iostream>
using namespace std;
int main() {
	float a, b, c,x;
	cout << "����������Ϊ";
	cin >> a >> b >> c;
	x = a + b + c;
	if (a + b > c && a + c > b && b + c > a) {
		cout << "�������ܳ�Ϊ" << x << endl;
		if (a == b || a == c || b == c) {
			cout << "��������Ϊ����������" << endl;
		}
	}

}