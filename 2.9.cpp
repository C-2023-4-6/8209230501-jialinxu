#include<iostream>
using namespace std;
int main()
{
	int x1=2, x2,x3;
	int num = 0,day=0;
	while (num <= 100)
		 {
			num += x1;
			x2 = 2 * x1;
			x1 = x2;
			day++;
			if (num + x1 >= 100) {
				break;
			}
		}
	cout << "每天平均花" << 0.8 * num / day << "元" << endl;

}
