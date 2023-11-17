#include<iostream>
using namespace std;
int main()
{
	double x1, x2;
	float a;
	cin >> a;
	if (a < 0) {
		cout << "不能得出结果" << endl;
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