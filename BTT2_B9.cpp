#include<iostream>
using namespace std;
int main () {
	int n;
	cin >> n;
	int x[n],y[n];
	for(int i=0;i<n;i++) {
		cin >> x[i] >> y[i];
	}
	int min_x=x[0];
	int min_y=y[0];
	for(int i=1;i<n;i++) {
		if(x[i]<min_x) {
			min_x=x[i];
		}
		if(y[i]<min_y) {
			min_y=y[i];
		}
	}
	cout << min_y*min_x;
	return 0;
}

