#include<iostream>
using namespace std;
int main() {
	int i=0;
	for (int a=2,sum=2,c;1;i++) {
		c = a;
		a = 2*c;
	
		sum = sum+a;
		if (a > 100) {
			cout << "每天平均花钱：" << (sum - a) / (double)(i + 1) * 0.8;
			
			break;
		}


	}
}