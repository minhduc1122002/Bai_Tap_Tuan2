#include <bits/stdc++.h>
using namespace std;
string NumToString1(int x) {
	string s;
	if(x==1) {
		s="one";
	}
	if(x==2) {
		s="two";
	}
	if(x==3) {
		s="three";
	}
	if(x==4) {
		s="four";
	}
	if(x==5) {
		s="five";
	}
	if(x==6) {
		s="six";
	}
	if(x==7) {
		s="seven";
	}
	if(x==8) {
		s="eight";
	}
	if(x==9) {
		s="nine";
	}
	if(x==10) {
		s="ten";
	}
	if(x==11) {
		s="eleven";
	}
	if(x==12) {
		s="twelve";
	}
	if(x==13) {
		s="thirteen";
	}
	if(x==14) {
		s="fourteen";
	}
	if(x==15) {
		s="fifteen";
	}
	if(x==16) {
		s="sixteen";
	}
	if(x==17) {
		s="seventeen";
	}
	if(x==18) {
		s="eighteen";
	}
	if(x==19) {
		s="nineteen";
	}
	if(x==20) {
		s="twenty";
	}
	if(x==30) {
		s="thirty";
	}
	if(x==40) {
		s="forty";
	}
	if(x==50) {
		s="fifty";
	}
	if(x==60) {
		s="sixty";
	}
	if(x==70) {
		s="seventy";
	}
	if(x==80) {
		s="eighty";
	}
	if(x==90) {
		s="ninety";
	}
	return s;
}
string NumToString2(int n) {
	string s;
	int temp1=n/100;
	int temp2=n%100;
	if(temp1!=0) {
		s=s+" hundred";
		s=NumToString1(temp1)+s;
	}
	if(temp2%10==0 || temp2<=20) {
		s=s+" "+NumToString1(temp2);
	}
	else {
		int temp3=temp2-temp2%10;
		s=s+" "+NumToString1(temp3);
		s=s+" "+NumToString1(temp2%10);
	}
	return s;	
}
int main () {
	int n;
	cin >> n;
	int k=0;
	string s;
	while(k<=6) {
		int x=pow(10,6-k);
		int check1=n/x;
		n=n%x;
		if(check1!=0 && k==0) {
			s=s+NumToString2(check1);
			s=s+" million ";
		}
		if(check1!=0 && k==3) {
			s=s+NumToString2(check1);
			s=s+" thousand ";
		}
		if(check1!=0 && k==6) {
			s=s+NumToString2(check1);
		}
		k=k+3;
	} 
	cout << s;
	return 0;
}
