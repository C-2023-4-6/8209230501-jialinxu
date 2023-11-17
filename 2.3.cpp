#include<iostream>
using namespace std;
int main() {
	float a, b, c,x;
	cout << "三角形三边为";
	cin >> a >> b >> c;
	x = a + b + c;
	if (a + b > c && a + c > b && b + c > a) {
		cout << "三角形周长为" << x << endl;
		if (a == b || a == c || b == c) {
			cout << "该三角形为等腰三角形" << endl;
		}
	}

}