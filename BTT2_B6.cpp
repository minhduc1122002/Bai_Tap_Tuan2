#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n][n];
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			a[i][j]=i+j+1;
			if(a[i][j]>n) {
				a[i][j]-=n;
			}
		}
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
