#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int i ;
	i = (a < b ? a : b);
	while (1) {
		if (a % i == 0 && b % i == 0&&i<=(a>b?a:b)) {
			cout << "a,b最大公约数为" << i << endl;
			break;
		}
		i--;
	}
			int j = 1;
			while (1) {
				if (j % a == 0 && j % b == 0) {
					cout << "a,b最小公倍数为" << j << endl;

					break;
				}
				j++;
			}
		}
