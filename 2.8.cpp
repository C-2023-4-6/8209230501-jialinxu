#include<iostream>
using namespace std;
int main()
{
	double x1, x2;
	float a;
	cin >> a;
	if (a < 0) {
		cout << "���ܵó����" << endl;
	}
	else {
		x2 = a;
		do {
			x1 = x2;
			x2 = (x1 + a / x1) / 2.0;
		} while (fabs(x1 - x2) > 1e-10);
		cout << x2 << endl;
	}
}