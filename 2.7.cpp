#include<iostream>
using namespace std;
int main() {
	char i;
	for (i = 0; i < 5; i++) {
		 char j;
		 for (j = 0; j <i; j++) {
			 cout << "*";
		 }
		 cout << "*" << endl;
	}
}