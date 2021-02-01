#include<iostream>
using namespace std;
int main () {
	int n;
	do {
		cin >> n;
		int x=-1;
		if(n!=x) {
			x=n;
			cout << n << " ";
		}
	}while(n!=-1);
	return 0;
}
