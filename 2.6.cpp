#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int i ;
	i = (a < b ? a : b);
	while (1) {
		if (a % i == 0 && b % i == 0&&i<=(a>b?a:b)) {
			cout << "a,b���Լ��Ϊ" << i << endl;
			break;
		}
		i--;
	}
			int j = 1;
			while (1) {
				if (j % a == 0 && j % b == 0) {
					cout << "a,b��С������Ϊ" << j << endl;

					break;
				}
				j++;
			}
		}
