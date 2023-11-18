#include<iostream>
using namespace std;
int max(int a, int b) {
	return (a > b) ? a : b;
}
int min(int a, int b) {
	return (a > b) ? b : a;
}
int main() {
	cout << "请输入两个正整数" << endl;
	int a, b;

	cin >> a >> b;
	int c = a, d = b;
	for (int i;1;) {
		i = b;
		b = a % b;
		a = i;
		if (b == 0) {
			cout << "最大公因数为" << i << endl;
			cout << "最小公倍数为" << c * d / i << endl;
			break;
		}

	}
	




}