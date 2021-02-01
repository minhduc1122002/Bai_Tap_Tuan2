#include<iostream>
#include<cmath>
using namespace std;
bool Prime(int n) {
	if(n<2) {
		return false;
	}
	else {
		for(int i=2;i<=sqrt(n);i++) {
			if(n%i==0) {
				return false;
			}
		}
	}
	return true;
}
int main() {
	int n;
	cin >> n;
	if(Prime(n)) {
		cout << "yes";
	}
	else {
		cout << "no";
	}
	return 0;
}
